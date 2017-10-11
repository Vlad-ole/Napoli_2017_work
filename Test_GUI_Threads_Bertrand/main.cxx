#include "TApplication.h"
#include "MyDisplay.h"

int main(int argc, char **argv)
{
   TApplication theApp("App", &argc, argv);
   MyDisplay* aDisplay = new MyDisplay(gClient->GetRoot(), 800, 600);
   aDisplay->InitGraph();
   theApp.Run();
   return 0;
}

