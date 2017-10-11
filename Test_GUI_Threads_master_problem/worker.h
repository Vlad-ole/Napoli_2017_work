#ifndef WORKER_H
#define WORKER_H

//root cern general
#include "TF1.h"
#include "TGraph.h"
#include <TRandom.h>

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

//to show thread_id for linux systems
#include <sys/types.h>
#include <sys/syscall.h>

class MyMainFrame;//forward declaration

struct DataStr
{
   Long_t cnt;
   std::vector<std::vector<Float_t> > data_vv;
};


class Worker
{
   RQ_OBJECT("Worker")
public:
   Worker();
//   void SendValue(Long_t); // *SIGNAL*
   void *handle(void *ptr);
private:
   Long_t counter;

};

#endif // WORKER_H
