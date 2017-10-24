#include "worker.h"
#include "mymainframe.h"

Worker::Worker() : counter(0)
{

}

//void  Worker::SendValue(Long_t cnt)
//{
//   Emit("SendValue(Long_t)",cnt);
//   printf("You are in Worker::SendValue (Thread %d) \n", syscall(__NR_gettid));
//}

void *Worker::handle(void *ptr)
{
   MyMainFrame* p = (MyMainFrame *)ptr;
   DataStr data_str;

   const int n_points = 100;
   data_str.data_vv.resize(2);
   data_str.data_vv[0].resize(n_points);
   data_str.data_vv[1].resize(n_points);

    while(1)
   {
      //some work to get data (read board or file)
      gSystem->Sleep(1000);//dummy
      printf("You are in Worker::handle (Thread %d); cnt = %d \n", syscall(__NR_gettid), counter);

      data_str.cnt = counter;


      for (int i = 0; i < n_points; ++i)
      {
          data_str.data_vv[0][i] = i;
          data_str.data_vv[1][i] = gRandom->Rndm()*10;
      }

      //p->h1->Lock();
      TThread::Lock();
      printf("You are in p->h1->Lock() (Thread %d); cnt = %d \n", syscall(__NR_gettid), counter);
      p->Draw_Graphs(data_str);
      TThread::UnLock();
      //p->h1->UnLock();



      //SendValue(counter);

      counter++;
   }
   return 0;
}
