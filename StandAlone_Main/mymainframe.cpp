#include "mymainframe.h"

MyMainFrame::MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h)
{
   // Create a main frame
   fMain = new TGMainFrame(p,w,h);

   //set size
   const UInt_t canvas_w = 500;//in pixel
   const UInt_t canvas_h = 500;//in pixel


   //Different LayoutHints
   TGLayoutHints *fL_canvas = new TGLayoutHints(kLHintsTop | kLHintsLeft | kLHintsExpandX |kLHintsExpandY, 5, 5, 5, 5);
   TGLayoutHints *fL_ExpandY = new TGLayoutHints(kLHintsExpandY);
   TGLayoutHints *fL_control_panel = new TGLayoutHints(kLHintsTop | kLHintsLeft | kLHintsExpandY, 5, 5, 5, 5);
   TGLayoutHints *fL_fMain = new TGLayoutHints(kLHintsTop | kLHintsRight | kLHintsExpandX |kLHintsExpandY, 5, 5, 5, 5);

   //hframe for control_panel and tab_frame
   TGHorizontalFrame *hframe_control_panel_tab_frame = new TGHorizontalFrame(fMain,200,40);


   //-------------- control_panel
   //Create a vertical frame for control_panel
   TGVerticalFrame *vframe_control_panel = new TGVerticalFrame(hframe_control_panel_tab_frame,300,900);

   // Create a horizontal frame widget with buttons
   TGHorizontalFrame *hframe = new TGHorizontalFrame(vframe_control_panel,200,40);
   TGTextButton *draw = new TGTextButton(hframe,"&Draw");
   draw->Connect("Clicked()","MyMainFrame",this,"DoDraw()");
   hframe->AddFrame(draw, new TGLayoutHints(kLHintsCenterX,5,5,3,4));
   TGTextButton *exit = new TGTextButton(hframe,"&Exit","gApplication->Terminate(0)");
   hframe->AddFrame(exit, new TGLayoutHints(kLHintsCenterX,5,5,3,4));
   vframe_control_panel->AddFrame(hframe, new TGLayoutHints(kLHintsCenterX,2,2,2,2));

//   fMain->AddFrame(vframe_control_panel, fL_control_panel);
   //--------------end control_panel






   //--------- create the Tab widget
   TGTab *fTab = new TGTab(hframe_control_panel_tab_frame, 300, 300);

   //Create Tab_1
   TGCompositeFrame *tab_frame = fTab->AddTab("Waveforms (ch0 - ch1)");


//   //Create a horizontal frame for control_panel(cpanel_canv) and canvases
//   TGHorizontalFrame *hframe_cpanel_canv = new TGHorizontalFrame(fMain,w,h);




   //---------------- canvases
   //Create vertical frame for 2 rows
   TGVerticalFrame *vframe_canvases = new TGVerticalFrame(tab_frame,w,h);

   //----
   //row 1
   //Create a horizontal frame widget with Ecanvases
   TGHorizontalFrame *hframe_canvas_row = new TGHorizontalFrame(vframe_canvases,w,h);

   // Create canvas widget
   //ch_0
   fEcanvas = new TRootEmbeddedCanvas("Ecanvas",hframe_canvas_row,canvas_w,canvas_h);
   hframe_canvas_row->AddFrame(fEcanvas, fL_canvas);

   //ch_1
   fEcanvas_ch1 = new TRootEmbeddedCanvas("Ecanvas_ch1",hframe_canvas_row,canvas_w,canvas_h);
   hframe_canvas_row->AddFrame(fEcanvas_ch1, fL_canvas);

   //ch_2
   fEcanvas_ch2 = new TRootEmbeddedCanvas("Ecanvas_ch2",hframe_canvas_row,canvas_w,canvas_h);
   hframe_canvas_row->AddFrame(fEcanvas_ch2, fL_canvas);
   //----



   //----
   //row 2
   //Create a horizontal frame widget with Ecanvases
   TGHorizontalFrame *hframe_canvas_row2 = new TGHorizontalFrame(vframe_canvases,w,h);

   //ch_3
   fEcanvas_ch3 = new TRootEmbeddedCanvas("Ecanvas_ch3",hframe_canvas_row2,canvas_w,canvas_h);
   hframe_canvas_row2->AddFrame(fEcanvas_ch3, fL_canvas);

   //ch_4
   fEcanvas_ch4 = new TRootEmbeddedCanvas("Ecanvas_ch4",hframe_canvas_row2,canvas_w,canvas_h);
   hframe_canvas_row2->AddFrame(fEcanvas_ch4, fL_canvas);

   //ch_5
   fEcanvas_ch5 = new TRootEmbeddedCanvas("Ecanvas_ch5",hframe_canvas_row2,canvas_w,canvas_h);
   hframe_canvas_row2->AddFrame(fEcanvas_ch5, fL_canvas);
   //----
   //---------------- end canvases


   //Fill vframe_canvases frame with 2 rows
   vframe_canvases->AddFrame(hframe_canvas_row, fL_canvas);
   vframe_canvases->AddFrame(hframe_canvas_row2, fL_canvas);



   tab_frame->AddFrame(vframe_canvases, fL_canvas);
   hframe_control_panel_tab_frame->AddFrame(vframe_control_panel, fL_control_panel);
   hframe_control_panel_tab_frame->AddFrame(fTab, fL_canvas);
   fMain->AddFrame(hframe_control_panel_tab_frame, fL_fMain);

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

    //ch_3
    TCanvas *fCanvas_ch3 = fEcanvas_ch3->GetCanvas();
    fCanvas_ch3->cd();
    f1->Draw();
    fCanvas_ch3->Update();

    //ch_4
    TCanvas *fCanvas_ch4 = fEcanvas_ch4->GetCanvas();
    fCanvas_ch4->cd();
    f1->Draw();
    fCanvas_ch4->Update();

    //ch_5
    TCanvas *fCanvas_ch5 = fEcanvas_ch5->GetCanvas();
    fCanvas_ch5->cd();
    f1->Draw();
    fCanvas_ch5->Update();


}

MyMainFrame::~MyMainFrame()
{
   // Clean up used widgets: frames, buttons, layout hints
   fMain->Cleanup();
   delete fMain;
}
