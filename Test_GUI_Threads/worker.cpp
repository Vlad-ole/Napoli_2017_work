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

//void  Worker::SendValue(Long_t cnt)
//{
//   Emit("SendValue(Long_t)",cnt);
//}

//void Worker::SetValue(std::vector<Int_t> *v)
//{
//    for (int i = 0; i < fValue_vec.size(); ++i)
//    {
//        fValue_vec[i] = v->at(i);
//    }

//    Emit("SetValue(std::vector<Int_t>*)", (Long_t)v);
//}

//void Worker::SetValueVV(std::vector<std::vector<Int_t> >* vv)
//{
//    Emit("SetValueVV(std::vector<std::vector<Int_t> >*)", (Long_t)vv);
//}

void Worker::SetStruct(DataStr* v)
{
    Emit("SetStruct(DataStr*)", (Long_t)v);
}

void *Worker::handle(void *ptr)
{
   //std::vector<Int_t> vec(3);

    std::vector<std::vector<Int_t> > vec_vv(2);
    vec_vv[0].resize(1);
    vec_vv[1].resize(1);

    //std::vector<std::vector<Int_t>* > vec_vv(2);
    //vec_vv[0]->resize(1);
    //vec_vv[1]->resize(1);

   while(1) {
      //some work to get data (read board or file)
      gSystem->Sleep(1000);//dummy

      //SendValue(counter);

      //      SetValueVV(&vec_vv);
      //      vec[0] = counter + 10;
      //      vec[1] = counter + 20;
      //      vec[2] = counter + 30;

      DataStr data_str;
      data_str.cnt = counter;
      data_str.data_vv.resize(2);
      data_str.data_vv[0].resize(1);
      data_str.data_vv[1].resize(1);

      data_str.data_vv[0][0] = counter;
      data_str.data_vv[1][0] = counter + 10;

      SetStruct(&data_str);

//      vec_vv[0][0] = counter;
//      vec_vv[1][0] = counter + 10;
//      SetValueVV(&vec_vv);

      //SetValueVV_pp(&vec_vv);
      //vec_vv[0]->at(0) = counter;


      //printf("You are in slave Thread: at event %d values are: %d, %d, %d \n", counter, vec[0], vec[1], vec[2]);
      //printf("You are in slave Thread: at event %d values are: %d \n", vec_vv[0][0], vec_vv[1][0]);
      printf("You are in slave Thread: at event %d values are %d, %d \n", data_str.cnt, data_str.data_vv[0][0], data_str.data_vv[1][0]);


      counter++;
   }
   return 0;
}



