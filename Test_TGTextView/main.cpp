#include "mymainframe.h"

int main(int argc, char *argv[])
{
    TApplication theApp("App",&argc,argv);

    printf("You are in main(int argc, char *argv[]) (Thread %d) \n", syscall(__NR_gettid));

    MyMainFrame *my_mframe = new MyMainFrame(/*gClient->GetRoot(),1500,900*/);
    //my_mframe->RunThread();
    my_mframe->Do();

    theApp.Run();
    return 0;
}
