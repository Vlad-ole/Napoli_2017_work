#include <TApplication.h>
#include <TGClient.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TRandom.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>

#include "mymainframe.h"




void example()
{     // Popup the GUI...
    new MyMainFrame(gClient->GetRoot(),1500,1000);
}

int main(int argc, char **argv)
{
    TApplication theApp("App",&argc,argv);
    example();
    theApp.Run();
    return 0;
}
