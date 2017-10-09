#ifndef THREADS_READ_DATA_V2_H
#define THREADS_READ_DATA_V2_H

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

#endif // THREADS_READ_DATA_V2_H
