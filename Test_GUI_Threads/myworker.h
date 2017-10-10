#ifndef MyWorker_H
#define MyWorker_H

#include "TThread.h"
#include <Riostream.h>

//root cern GUI
#include <TGClient.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>
#include "TGFrame.h"
#include "TGTab.h"
#include <TQObject.h>
#include <RQ_OBJECT.h>

struct DataStr
{
   Long_t cnt;
   std::vector<std::vector<Int_t> > data_vv;
};

//Bertrand
class MyWorker
{
   RQ_OBJECT("MyWorker")
private:
   Long_t counter;
   TThread *h1;
public:
   MyWorker();
   void SendDataStruct(DataStr*); // *SIGNAL*
   void *Readout_loop(void *ptr);
};

#endif // MyWorker_H
