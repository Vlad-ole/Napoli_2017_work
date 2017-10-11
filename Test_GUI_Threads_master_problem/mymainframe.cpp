#include "mymainframe.h"
#include "worker.h"


MyMainFrame::MyMainFrame()
{
    printf("You are in MyMainFrame::MyMainFrame() (Thread %d) \n", syscall(__NR_gettid));

    worker = new Worker();
//    worker->Connect("SendValue(Long_t)","MyMainFrame",this,"Draw_Graphs(Long_t)");

    fMain = new TGMainFrame(gClient->GetRoot(),1500,900);

    TGHorizontalFrame *hframe = new TGHorizontalFrame(fMain,200,40);
    TGLayoutHints *fL = new TGLayoutHints(kLHintsTop | kLHintsRight | kLHintsExpandX |kLHintsExpandY, 5, 5, 5, 5);
    fEcanvas = new TRootEmbeddedCanvas("Ecanvas",hframe,500,500);
    hframe->AddFrame(fEcanvas, fL);

    fMain->AddFrame(hframe, fL);

    // Set a name to the main frame
    fMain->SetWindowName("Online monitor for ReD experiment");

    // Map all subwindows of main frame
    fMain->MapSubwindows();

    // Initialize the layout algorithm
    fMain->Resize(fMain->GetDefaultSize());

    // Map main frame
    fMain->MapWindow();
}

void MyMainFrame::StartThread()
{
   h1 = new TThread("Consumer", (void(*)(void *))&Worker::handle, (void*) this);
   h1->Run();
}

void MyMainFrame::Draw_Graphs(DataStr data_str)
{
//    TGraph *gr = new TGraph(data_str.data_vv[0].size(), &data_str.data_vv[0][0], &data_str.data_vv[1][0]);


//    TCanvas *fCanvas = fEcanvas->GetCanvas();
//    fCanvas->cd();
//    gr->Draw();
//    fCanvas->Update();

    printf("You are in Draw_Graphs (Thread %d) \n", syscall(__NR_gettid));
}


MyMainFrame::~MyMainFrame()
{
   // Clean up used widgets: frames, buttons, layout hints
   fMain->Cleanup();
   delete fMain;
}
