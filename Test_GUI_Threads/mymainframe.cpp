#include "mymainframe.h"

void MyMainFrame::DoDraw(DataStr* data_str)
{
    //for linux
    pid_t this_id = syscall(__NR_gettid);

    f1 = new TF1("f1","sin(x)/x",0,gRandom->Rndm()*10);
    fCanvas = fEcanvas->GetCanvas();

    printf("You are in func DoDraw on Thread(%d): at event %d values are: %d, %d \n", this_id, data_str->cnt, data_str->data_vv[0][0], data_str->data_vv[1][0]);

}

//added
MyMainFrame::MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h)
{
    // Create a main frame
    fMain = new TGMainFrame(p,w,h);

    TGHorizontalFrame *hframe_control_panel_tab_frame = new TGHorizontalFrame(fMain,200,40);
    TGLayoutHints *fL_fMain = new TGLayoutHints(kLHintsTop | kLHintsRight | kLHintsExpandX |kLHintsExpandY, 5, 5, 5, 5);
    fEcanvas = new TRootEmbeddedCanvas("Ecanvas",hframe_control_panel_tab_frame,500,500);
    hframe_control_panel_tab_frame->AddFrame(fEcanvas, fL_canvas);

    fMain->AddFrame(hframe_control_panel_tab_frame, fL_fMain);

    // Set a name to the main frame
    fMain->SetWindowName("Online monitor for ReD experiment");

    // Map all subwindows of main frame
    fMain->MapSubwindows();

    // Initialize the layout algorithm
    fMain->Resize(fMain->GetDefaultSize());

    // Map main frame
    fMain->MapWindow();
}

MyMainFrame::~MyMainFrame()
{
   // Clean up used widgets: frames, buttons, layout hints
   fMain->Cleanup();
   delete fMain;
}
