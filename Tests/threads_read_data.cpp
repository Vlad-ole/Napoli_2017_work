#include "TThread.h"
#include <Riostream.h>

void *handle(void *ptr)
{
   long counter = 0;
   vector<Int_t> vec(3);

   while(1)
   {
      //some work to get data (read board or file)
      gSystem->Sleep(1000);//dummy
      vec[0] = counter + 10;
      vec[1] = counter + 20;
      vec[2] = counter + 30;


      printf("You are in slave Thread: at event %d values are is: %d, %d, %d \n", counter, vec[0], vec[1], vec[2]);
      counter++;

      //I want to send new data to master thread.
      //How?
   }

   return 0;
}

void threads_read_data()
{
#ifdef __CINT__
   printf("This script can only be executed via ACliC: .x threads.C++\n");
   return;
#endif

   printf("You are in master Thread \n");
   TThread *h1 = new TThread("h1", handle, (void*) 1);
   h1->Run();

   //I want to recieve data from slave Thread
   // printf("You are in master Thread: at event %d values are: %d, %d, %d \n", counter, vec[0], vec[1], vec[2]);

   h1->Join();

}
