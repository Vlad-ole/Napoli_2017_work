#include "myworker.h"

using namespace std;

MyWorker::MyWorker() : counter(0), h1(0)
{
   h1 = new TThread("h1", (void(*)(void *))&MyWorker::Readout_loop, (void*) this);
   h1->Run();
}

void MyWorker::SendDataStruct(DataStr* v)
{
    Emit("SendDataStruct(DataStr*)", (Long_t)v);
}

void *MyWorker::Readout_loop(void *ptr)
{

   while(1)
   {
      //some work to get data (read board or file)
      gSystem->Sleep(1000);//dummy

      DataStr data_str;
      data_str.cnt = counter;
      data_str.data_vv.resize(2);
      data_str.data_vv[0].resize(1);
      data_str.data_vv[1].resize(1);

      data_str.data_vv[0][0] = counter;
      data_str.data_vv[1][0] = counter + 10;

      //for linux
      pid_t this_id = syscall(__NR_gettid);
      //pid_t this_id = gettid();

      SendDataStruct(&data_str);
      printf("You are in slave Thread(%d): at event %d values are: %d, %d \n", this_id, data_str.cnt, data_str.data_vv[0][0], data_str.data_vv[1][0]);

      counter++;
   }
   return 0;
}



