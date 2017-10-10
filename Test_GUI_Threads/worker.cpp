#include "worker.h"

//std::vector<Int_t> Worker::fValue_vec(0);
//Long_t Worker::counter = 0;
//TThread *Worker::h1 = new TThread("h1", Worker::handle);

//Worker::Worker()
//{
//    h1->Run();
//}

//void  Worker::SendValue(Long_t cnt)
//{
//    Emit("SendValue(Long_t)",cnt);
//}

//void *Worker::handle(void *ptr)
//{
//   vector<Int_t> vec(3);

//   //Long_t counter = 0;

//   while(1)
//   {
//      //some work to get data (read board or file)
//      gSystem->Sleep(1000);//dummy
//      vec[0] = counter + 10;
//      vec[1] = counter + 20;
//      vec[2] = counter + 30;

//      //I want to send new data to master thread.
//      //How?
//      //
//      SendValue(counter);// see the next error:
//      //worker.cpp: In static member function ‘static void* Worker::handle(void*)’:
//      //worker.cpp:34:24: error: cannot call member function ‘void Worker::SendValue(Long_t)’ without object SendValue(counter);

//      //this code does not help too
//      //Emit("SendValue(Long_t)",counter);

//      printf("You are in slave Thread: at event %d values are is: %d, %d, %d \n", counter, vec[0], vec[1], vec[2]);

//      counter++;


//   }

//   return 0;
//}

Worker::Worker() : counter(0), h1(0)
{
   h1 = new TThread("h1", (void(*)(void *))&Worker::handle, (void*) this);
   h1->Run();
}

void  Worker::SendValue(Long_t cnt)
{
   Emit("SendValue(Long_t)",cnt);
}

void *Worker::handle(void *ptr)
{
   std::vector<Int_t> vec(3);
   while(1) {
      //some work to get data (read board or file)
      gSystem->Sleep(1000);//dummy
      vec[0] = counter + 10;
      vec[1] = counter + 20;
      vec[2] = counter + 30;
      SendValue(counter);
      printf("You are in slave Thread: at event %d values are is: %d, %d, %d \n", counter, vec[0], vec[1], vec[2]);
      counter++;
   }
   return 0;
}



