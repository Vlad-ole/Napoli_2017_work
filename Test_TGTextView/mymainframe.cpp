#include "mymainframe.h"

MyMainFrame::MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h)
{
    // Create the main frame
    fMain = new TGMainFrame(p,w,h);

    twStatus_label = new TGTextView(fMain, 400, 400);
    fMain->AddFrame(twStatus_label);

//    fMain->Connect("CloseWindow()", "MyMainFrame", this, "CloseWindow()");
//    fMain->DontCallClose();

    // Set a name to the main frame
    fMain->SetWindowName("Test GUI");

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

void MyMainFrame::RunThread()
{
    //Threads
    slave_thread = new TThread("slave_thread", (void(*) (void *))ReadoutLoop, (void*) this);
    slave_thread->Run();
}

//void *MyMainFrame::ReadoutLoop(void *aPtr)
//{

//    MyMainFrame *p = (MyMainFrame*)aPtr;

//    while(1)
//    {
//        TThread::Lock();
//        ostringstream osstr;
//        osstr << p->twStatus_label->ReturnLineCount();
//        p->twStatus_label->AddLine( osstr.str().c_str() );
//        p->twStatus_label->ShowBottom();
//        TThread::UnLock();

//        gSystem->Sleep(100);
//    }

//}

void *MyMainFrame::ReadoutLoop(void *aPtr)
{
    MyMainFrame *p = (MyMainFrame*)aPtr;
    while (1)
    {
        TThread::Lock();
        //printf("You are in ReadoutLoop (Thread %d) \n", syscall(__NR_gettid));
        ostringstream osstr;
        osstr << gROOT->ProcessLine(Form("((TGTextView *)0x%lx)->ReturnLineCount();", (ULong_t)p->twStatus_label));
        gROOT->ProcessLine(Form("((TGTextView *)0x%lx)->AddLine(\"%s\");", (ULong_t)p->twStatus_label, osstr.str().c_str()));
        gROOT->ProcessLine(Form("((TGTextView *)0x%lx)->ShowBottom();", (ULong_t)p->twStatus_label));
        TThread::UnLock();
        gSystem->Sleep(500);
    }
}



