#ifndef WORKER_H
#define WORKER_H

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

class Worker
{
   RQ_OBJECT("Worker")
private:
   static std::vector<Int_t> fValue_vec;
   static Long_t counter;

   static TThread *h1;
public:
   Worker();
   void  SendValue(Long_t); // *SIGNAL*

   static void *handle(void *ptr);
};

#endif // WORKER_H