/*****************************************************************************
*
*****************************************************************************/
#include <TApplication.h>
#include <TRootEmbeddedCanvas.h>
#include <TCanvas.h>
#include <TGClient.h>
#include <TGButton.h>
#include <TRandom.h>
#include <TMath.h>
#include <TSystem.h>
#include <TStyle.h>
#include <TThread.h>

#include <iostream>
#include <string>
#include <exception>
#include <TMultiGraph.h>
#include <TGraph.h>
#include <TCanvas.h>
#include <TMultiGraph.h>

#include "MyDisplay.h"

using namespace std;

ClassImp(MyDisplay)

//===============================================================================
void *MyDisplay::ConsumerFunc(void *aPtr)
{
   MyDisplay *p = (MyDisplay*)aPtr;
   printf("You are in MyDisplay::ConsumerFunc(...) (Thread %d) \n", syscall(__NR_gettid));

   Double_t value;
   if (!gRandom)
      gRandom = new TRandom(0);
   TRandom& r= *gRandom;

   while (p->aCond) {
      for (int i = 0; i < p->aNrGraphs; i++) {
         for (Int_t j = 0; j < p->nPoints; j++) {
            value  = (Int_t)(TMath::Sin( j * 4 * TMath::Pi() / p->nPoints)*100  );
            value += Int_t((r.Rndm()-0.5)*5);
            TThread::Lock();
            if (j==0) printf("You are in TThread::Lock() (Thread %d) \n", syscall(__NR_gettid));
            p->mGraphs[i]->SetPoint(j, j, value);
            TThread::UnLock();
         }
      }
      printf("You are in MyDisplay::ConsumerFunc(...) before TCanvas  (Thread %d) \n", syscall(__NR_gettid));
      TCanvas *aCanvas = p->fEcan->GetCanvas();
      aCanvas->Modified();
      aCanvas->Update();
      gSystem->Sleep(1000);
   }
   p->aCond = 1;
   return 0;
}


//===============================================================================
MyDisplay::MyDisplay(const TGWindow *p, UInt_t w, UInt_t h):TGMainFrame(p,w,h)
{
   printf("You are in MyDisplay::MyDisplay(...) (Thread %d) \n", syscall(__NR_gettid));

   aCond = 0;
   aNrGraphs = 4;
   nPoints = 512;
   gStyle->SetOptDate(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(kFALSE);
   gStyle->SetTitleFillColor(4);
   gStyle->SetTitleBorderSize(1);
   gStyle->SetTitleBorderSize(1);
   gStyle->SetOptFit(0);
   gStyle->SetFrameFillColor(1);
   gStyle->SetFrameBorderSize(1);
   gStyle->SetFrameBorderMode(0);
   gStyle->SetCanvasColor(1);
   gStyle->SetCanvasBorderSize(1);
   gStyle->SetCanvasBorderMode(0);
   gStyle->SetPadColor(1);
   gStyle->SetPadBorderSize(2);
   gStyle->SetPadBorderMode(0);
   gStyle->SetLabelSize(0.04,"X");
   gStyle->SetLabelSize(0.04,"Y");
   gStyle->SetAxisColor(32, "x");
   gStyle->SetAxisColor(32, "y");
   gStyle->SetLabelColor(32, "x");
   gStyle->SetLabelColor(32, "y");
   gStyle->SetPadGridX(1);
   gStyle->SetPadGridY(1);
   gStyle->SetPalette(1);

   fEcan = new TRootEmbeddedCanvas(0,this,200,200);
   AddFrame(fEcan, new TGLayoutHints(kLHintsTop | kLHintsLeft | kLHintsExpandX  | kLHintsExpandY,0,0,1,1));

   TGHorizontalFrame *hframe1 = new TGHorizontalFrame(this, 200, 40);
   update = new TGTextButton(hframe1, "Update Start");
   update->Connect("Clicked()", "MyDisplay", this, "UpdateGraph()"); 
   hframe1->AddFrame(update, new TGLayoutHints(kLHintsCenterX,5,5,5,5));
   AddFrame(hframe1, new TGLayoutHints(kLHintsCenterX, 2, 2, 2, 2)); 

   TGHorizontalFrame *hframe2 = new TGHorizontalFrame(this, 200, 40);
   updateStop = new TGTextButton(hframe2, "Update Stop");
   updateStop->Connect("Clicked()", "MyDisplay", this, "UpdateStop()"); 
   updateStop->SetEnabled(kFALSE);
   hframe2->AddFrame(updateStop, new TGLayoutHints(kLHintsCenterX,5,5,5,5));
   AddFrame(hframe2, new TGLayoutHints(kLHintsCenterX, 2, 2, 2, 2)); 

   Connect("CloseWindow()", "MyDisplay", this, "CloseWindow()");
   DontCallClose();

   SetWindowName("Main Window");
   MapSubwindows();
   Resize(GetDefaultSize());
   MapWindow();


}

//===============================================================================
void MyDisplay::UpdateGraph()
{
   printf("You are in MyDisplay::UpdateGraph() (Thread %d) \n", syscall(__NR_gettid));

   updateStop->SetEnabled(kTRUE);
   update->SetEnabled(kFALSE);
   aCond = 1;
   aConsumer = new TThread("Consumer", (void(*) (void *))ConsumerFunc, (void*) this);
   aConsumer->Run();
}

//===============================================================================

void MyDisplay::CloseWindow()
{
   UpdateStop();
   delete this;
}

//===============================================================================
void MyDisplay::UpdateStop()
{
   aCond = 0;
   updateStop->SetEnabled(kFALSE);
   update->SetEnabled(kTRUE);
   if (aConsumer) {
      TThread::Delete(aConsumer);
      delete aConsumer;
      aConsumer = 0;
   }
}

//===============================================================================

MyDisplay::~MyDisplay()
{
   aCond = 0;
   for (int i = 0; i < aNrGraphs; i++) {
      delete  mGraphs[i];
   }
   delete [] mGraphs;
   delete mMultiGraph;
   update->Disconnect();
   updateStop->Disconnect();
   gApplication->Terminate(0);
}

//===============================================================================

void MyDisplay::InitGraph()
{
   mMultiGraph = new TMultiGraph();
   mGraphs = new TGraph*[ aNrGraphs ];

   char name[20];
   for (int i = 0; i < aNrGraphs; i++) {
      sprintf(name,"g_%d",i);
      mGraphs[i] = new TGraph( nPoints );
      for(Int_t j = 0; j < nPoints; j++) {
         mGraphs[i]->SetPoint(j, j, 0);
      }
      mGraphs[i]->SetMarkerColor(i+2);
      mGraphs[i]->SetLineColor(i+2);
      mGraphs[i]->SetMarkerStyle(21);
      mGraphs[i]->SetMarkerSize(0.3);
      mMultiGraph->Add(mGraphs[i], "lp");
   }
   TCanvas *aCanvas = fEcan->GetCanvas();
   mMultiGraph->Draw("a");
   mMultiGraph->SetMaximum(120);
   mMultiGraph->SetMinimum(-120);
   aCanvas->Update(); 
}
