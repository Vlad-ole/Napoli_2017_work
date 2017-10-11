#include <TApplication.h>

#include "a.h"
#include "b.h"

int main(int argc, char *argv[])
{
    TApplication theApp("App",&argc,argv);

    A *aa = new A();
    B bb();

    theApp.Run();

    return 0;
}
