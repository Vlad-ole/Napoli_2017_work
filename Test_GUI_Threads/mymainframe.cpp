#include "mymainframe.h"

//MyMainFrame::MyMainFrame()
//{

//}

void MyMainFrame::DoDraw(DataStr* data_str)
{
    printf("You are in master Thread: at event %d values are: %d, %d \n", data_str->cnt, data_str->data_vv[0][0], data_str->data_vv[1][0]);
}

//added
MyMainFrame::MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h)
{
    // Create a main frame
    fMain = new TGMainFrame(p,w,h);

    TGHorizontalFrame *hframe_control_panel_tab_frame = new TGHorizontalFrame(fMain,200,40);
    TGLayoutHints *fL_fMain = new TGLayoutHints(kLHintsTop | kLHintsRight | kLHintsExpandX |kLHintsExpandY, 5, 5, 5, 5);
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
