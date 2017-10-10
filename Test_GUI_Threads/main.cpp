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

    MyWorker *worker = new MyWorker();
    //MyMainFrame *my_mframe = new MyMainFrame();
    MyMainFrame *my_mframe = new MyMainFrame(gClient->GetRoot(),1500,900);

    worker->Connect("SendDataStruct(DataStr*)","MyMainFrame",my_mframe,"DoDraw(DataStr*)");//

    theApp.Run();
    return 0;
}

