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
    TApplication theApp("App",&argc,argv);

    printf("You are in master Thread(%d) \n", syscall(__NR_gettid));

    MyMainFrame *my_mframe = new MyMainFrame();
    my_mframe->StartThread();

    theApp.Run();
    return 0;
}

