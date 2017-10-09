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
    printf("You are in master Thread \n");
    TApplication theApp("App",&argc,argv);

    Worker *worker = new Worker();
    MyMainFrame *my_mframe = new MyMainFrame();



    theApp.Run();
    return 0;
}

