#include "TSpectrum.h"
#include <iostream>

#include <TApplication.h>

using namespace std;

int main(int argc, char *argv[])
{
    TApplication theApp("App",&argc,argv);

    TSpectrum *s = new TSpectrum(10);

    cout << "all is ok" << endl;

    theApp.Run();
    return 0;
}
