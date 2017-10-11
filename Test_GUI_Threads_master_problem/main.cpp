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


//    /tmp/ccQF6kxU.o: In function `MyMainFrame::MyMainFrame()':
//    mymainframe.cpp:(.text+0x16): undefined reference to `vtable for MyMainFrame'
//    /tmp/ccPNo7e2.o: In function `ROOTDict::GenerateInitInstanceLocal(MyMainFrame const*)':
//    mainDic.cpp:(.text+0x64): undefined reference to `typeinfo for MyMainFrame'
//    mainDic.cpp:(.text+0xf3): undefined reference to `typeinfo for MyMainFrame'
//    collect2: error: ld returned 1 exit status
