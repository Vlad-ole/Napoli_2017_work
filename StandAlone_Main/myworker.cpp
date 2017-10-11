#include <iostream>

#include "TRandom.h"

#include "myworker.h"

using namespace std;

MyWorker::MyWorker() : counter(0), thread_h1(0)
{
    //is_active_loop = true;
    thread_h1 = new TThread("h1", (void(*)(void *))&MyWorker::Readout_loop, (void*) this);
    thread_h1->Run();
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


      DataStr data_str;
      data_str.cnt = counter;
      data_str.data_vv.resize(2);
      data_str.data_vv[0].resize(1);
      data_str.data_vv[1].resize(1);

      data_str.data_vv[0][0] = counter;
      data_str.data_vv[1][0] = counter + 10;

      SendDataStruct(&data_str);
      printf("You are in slave Thread: at event %d values are: %d, %d \n", data_str.cnt, data_str.data_vv[0][0], data_str.data_vv[1][0]);
      counter++;

      gSystem->Sleep(1000);//dummy
   }
   return 0;
}


//void* MyWorker::Readout_loop(void *ptr)
//{

//    cout << "you are in Readout_loop()!" << endl;

////    const int n_points = 1000;
////    const int baseline = 4000;
////    const int n_ch = 6;


//    global_counter = 0;


//    while(1)
//    {
//        if(is_active_loop)
//        {
//            //do some useful work

//            //initialize DataStr
//            DataStr data_str;
//            data_str.counter = global_counter;
////            data_str.data_vv.resize(n_ch);
////            for (int i = 0; i < data_str.data_vv.size(); ++i)
////            {
////                data_str.data_vv[i].resize(n_points);
////            }


////            TRandom rnd;

////            for (int i = 0; i < n_ch; ++i)
////            {
////                for (int j = 0; j < n_points; ++j)
////                {
////                    double adc_value;
////                    adc_value = rnd.Uniform(-10, 10) + baseline;
////                    data_str.data_vv[i][j] = adc_value;
////                }
////            }

//            cout << "File: " <<__FILE__ << "; Line: " << __LINE__ << endl;
//            SendDataStruct(&data_str);
//            cout << "File: " <<__FILE__ << "; Line: " << __LINE__ << endl;

//            thread_h1->Sleep(1);//immitate some activity
//            global_counter++;
//            cout << "is_active_loop ==" << is_active_loop << endl;

//        }
//        else
//        {
//            //Wait permission to read data
//            //well, it is not the best solution, but it works. Later I will realise this using signal/slot
//            thread_h1->Sleep(1);
//            cout << "is_active_loop ==" << is_active_loop << endl;
//        }
//    }

//    return 0;
//}



//void MyWorker::DataAcquisition_Slot()
//{
//#ifdef DEBUG
//    cout << "you are in DataAcquisition_Slot()!" << endl;
//#endif // DEBUG

//    if(is_active_loop)
//    {
//        is_active_loop = false;
//    }
//    else
//    {
//        is_active_loop = true;
//    }
//}
