#include "worker.h"

std::vector<Int_t> Worker::fValue_vec(0);
Long_t Worker::counter = 0;
TThread *Worker::h1 = new TThread("h1", Worker::handle);

Worker::Worker()
{
    h1->Run();
}

void  Worker::SendValue(Long_t)
{
    Emit("SetValue(Long_t)",counter);
}

void *Worker::handle(void *ptr)
{
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
