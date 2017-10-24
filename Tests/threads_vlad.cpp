//+ Example of a simple script creating 3 threads.
// This script can only be executed via ACliC: .x threads.C++.
// Before executing the script, load the Thread library with:
//   gSystem->Load("libThread");
// This is not needed anymore due to the rootmap facility which
// automatically loads the needed libraries.
//Author: Victor Perevovchikov

#include "TThread.h"
#include <Riostream.h>

//to show thread_id for linux systems
#include <sys/types.h>
#include <sys/syscall.h>


void *handle(void *ptr)
{
   long nr = (long) ptr;

   for (int i = 0; i < 5; i++) {

      TThread::Lock();
      printf("Here I am loop index: %3d (Thread %d)\n", i, syscall(__NR_gettid) );
      TThread::UnLock();

//      TThread::Printf("Here I am loop index: %d , thread: %ld", i, syscall(__NR_gettid) );

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

   printf("You are in threads_vlad()(Thread %d)\n", syscall(__NR_gettid) );
   TThread *h1 = new TThread("h1", handle, (void*) 1);
   h1->Run();

   TThread *h2 = new TThread("h2", handle, (void*) 1);
   h2->Run();

   //TThread::Ps();
   //h1->Join();

   cout << "Message from the main thread" << endl;

}
