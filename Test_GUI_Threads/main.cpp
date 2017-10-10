#include <TApplication.h>
#include <TGClient.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TRandom.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>

//my
#include "mymainframe.h"

int main(int argc, char **argv)
{
    //printf("You are in master Thread \n");
    TApplication theApp("App",&argc,argv);

    Worker *worker = new Worker();
    MyMainFrame *my_mframe = new MyMainFrame();

    //worker->Connect("SendValue(Long_t)","MyMainFrame",my_mframe,"Draw_Graphs(Long_t)");//works
    //worker->Connect("SetValue(std::vector<Int_t>*)","MyMainFrame",my_mframe,"Draw_Graphs(std::vector<Int_t>*)");//works
    worker->Connect("SetValueVV(std::vector<std::vector<Int_t> >*)","MyMainFrame",my_mframe,"Draw_Graphs(std::vector<std::vector<Int_t> >*)"); // Error in <TQObject::CheckConnectArgs>: signal Worker::SetValue(std::vector<std::vector<Int_t>>*) does not exist

    theApp.Run();
    return 0;
}

