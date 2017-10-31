#include "mymainframe.h"
#include "fithist.h"

MyMainFrame::MyMainFrame(/*const TGWindow *p,UInt_t w,UInt_t h*/)
{
//    // Create the main frame
//    fMain = new TGMainFrame(p,w,h);

//    eCanvas  = new TRootEmbeddedCanvas("Ecanvas",fMain,500,500);
//    fMain->AddFrame(eCanvas, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY) );

//    //    fMain->Connect("CloseWindow()", "MyMainFrame", this, "CloseWindow()");
////    fMain->DontCallClose();

//    // Set a name to the main frame
//    fMain->SetWindowName("Test GUI");

//    // Map all subwindows of main frame
//    fMain->MapSubwindows();

//    // Initialize the layout algorithm
//    fMain->Resize(fMain->GetDefaultSize());

//    // Map main frame
//    fMain->MapWindow();

//    //EnableFrame(cframe, kFALSE);

}

MyMainFrame::~MyMainFrame()
{
//   // Clean up used widgets: frames, buttons, layout hints
//   fMain->Cleanup();
//   delete fMain;
}

void MyMainFrame::RunThread()
{
    //Threads
    slave_thread = new TThread("slave_thread", (void(*) (void *))ReadoutLoop, (void*) this);
    slave_thread->Run();
}


void *MyMainFrame::ReadoutLoop(void *aPtr)
{
    MyMainFrame *p = (MyMainFrame*)aPtr;
}


void MyMainFrame::Do()
{
    Int_t nbins = 40;
    Double_t xmin = -2;
    Double_t xmax = 2;

    TRandom3 rnd;
    h1 = new TH1F("h1", "hist",nbins, xmin, xmax);

    Double_t val = 0;
    const double sigma = 0.1;
    for (int i = 0; i < 100000; ++i)
    {
        val = rnd.PoissonD(3) + rnd.Gaus(0, sigma);
        h1->Fill(val);
    }

    FitHist *fit_hist = new FitHist(h1, true);
    fit_hist->FindPeaks(2);
    fit_hist->FindSpe();
    fit_hist->GetLP();
    fit_hist->ShowFitParameters();


    //TCanvas *c1 = eCanvas->GetCanvas();
    TCanvas *c1 = new TCanvas("c1","cancas", 500, 500);
    c1->cd();
    h1->Draw("E1");
    fit_hist->h_discrete->SetLineColor(kGreen);
    fit_hist->h_discrete->Draw("E1 same");
    fit_hist->fit_func->Draw("same");

    c1->Modified();
    c1->Update();
}
