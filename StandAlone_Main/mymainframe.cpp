#include "mymainframe.h"

MyMainFrame::MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h)
{
   // Create a main frame
   fMain = new TGMainFrame(p,w,h);

   const UInt_t canvas_w = 500;//in pixel
   const UInt_t canvas_h = 500;//in pixel

   //Create a horizontal frame widget with fEcanvas, fEcanvas_ch1
   TGHorizontalFrame *hframe_canvas_row = new TGHorizontalFrame(fMain,1500,900);

   // Create canvas widget
   //ch_0
   fEcanvas = new TRootEmbeddedCanvas("Ecanvas",fMain,canvas_w,canvas_h);
   //fMain->AddFrame(fEcanvas, new TGLayoutHints(kLHintsExpandX |kLHintsExpandY, 10,10,10,1));
   hframe_canvas_row->AddFrame(fEcanvas, new TGLayoutHints(kLHintsExpandX));

   //ch_1
   fEcanvas_ch1 = new TRootEmbeddedCanvas("Ecanvas_ch1",fMain,canvas_w,canvas_h);
   //fMain->AddFrame(fEcanvas_ch1, new TGLayoutHints(kLHintsExpandX |kLHintsExpandY, 10,10,10,1));
   hframe_canvas_row->AddFrame(fEcanvas_ch1, new TGLayoutHints(kLHintsExpandX));

   //ch_2
   fEcanvas_ch2 = new TRootEmbeddedCanvas("Ecanvas_ch2",fMain,canvas_w,canvas_h);
   hframe_canvas_row->AddFrame(fEcanvas_ch2, new TGLayoutHints(kLHintsExpandX));


   fMain->AddFrame(hframe_canvas_row, new TGLayoutHints(kLHintsExpandX));


   // Create a horizontal frame widget with buttons
   TGHorizontalFrame *hframe = new TGHorizontalFrame(fMain,200,40);
   TGTextButton *draw = new TGTextButton(hframe,"&Draw");
   draw->Connect("Clicked()","MyMainFrame",this,"DoDraw()");
   hframe->AddFrame(draw, new TGLayoutHints(kLHintsCenterX,
                                            5,5,3,4));
   TGTextButton *exit = new TGTextButton(hframe,"&Exit",
                                "gApplication->Terminate(0)");
   hframe->AddFrame(exit, new TGLayoutHints(kLHintsCenterX,
                                            5,5,3,4));
   fMain->AddFrame(hframe, new TGLayoutHints(kLHintsCenterX,
                                             2,2,2,2));

   // Set a name to the main frame
   fMain->SetWindowName("Simple Example");

   // Map all subwindows of main frame
   fMain->MapSubwindows();

   // Initialize the layout algorithm
   fMain->Resize(fMain->GetDefaultSize());

   // Map main frame
   fMain->MapWindow();
}

void MyMainFrame::DoDraw()
{

//   // Draws function graphics in randomly chosen interval
    TF1 *f1 = new TF1("f1","sin(x)/x",0,gRandom->Rndm()*10);
    f1->SetLineWidth(3);
//orginal
//   f1->Draw();
//   TCanvas *fCanvas = fEcanvas->GetCanvas();
//   fCanvas->cd();
//   fCanvas->Update();

    //ch_0
    TCanvas *fCanvas = fEcanvas->GetCanvas();
    fCanvas->cd();
    f1->Draw();
    fCanvas->Update();

    //ch_1
    TCanvas *fCanvas_ch1 = fEcanvas_ch1->GetCanvas();
    fCanvas_ch1->cd();
    f1->Draw();
    fCanvas_ch1->Update();

    //ch_2
    TCanvas *fCanvas_ch2 = fEcanvas_ch2->GetCanvas();
    fCanvas_ch2->cd();
    f1->Draw();
    fCanvas_ch2->Update();


}

MyMainFrame::~MyMainFrame()
{
   // Clean up used widgets: frames, buttons, layout hints
   fMain->Cleanup();
   delete fMain;
}
