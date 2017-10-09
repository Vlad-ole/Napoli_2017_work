//+ Example of a simple script creating 3 threads.
// This script can only be executed via ACliC: .x threads.C++.
// Before executing the script, load the Thread library with:
//   gSystem->Load("libThread");
// This is not needed anymore due to the rootmap facility which
// automatically loads the needed libraries.
//Author: Victor Perevovchikov

#include "TThread.h"
#include <Riostream.h>

void *handle(void *ptr)
{
   long nr = (long) ptr;

   for (int i = 0; i < 10; i++) {
      //TThread::Lock();
      //printf("Here I am loop index: %3d , thread: %d\n",i,nr);
      //TThread::UnLock();

      TThread::Printf("Here I am loop index: %d , thread: %ld", i, nr);
      gSystem->Sleep(1000);
   }
   return 0;
}

void threads_vlad()
{
#ifdef __CINT__
   printf("This script can only be executed via ACliC: .x threads.C++\n");
   return;
#endif

   //gDebug = 1;

   printf("Starting Thread 1\n");
   TThread *h1 = new TThread("h1", handle, (void*) 1);
   h1->Run();

   //TThread::Ps();
   h1->Join();

   cout << "Message from the main thread" << endl;

}
