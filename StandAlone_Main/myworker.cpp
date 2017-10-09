#include <iostream>
#include "myworker.h"


using namespace std;

void* test_func(void *ptr)
{
    cout << "you are in test_func(void *ptr)!" << endl;
    return 0;
}

MyWorker::MyWorker()
{
    is_active_loop = false;
    //thread_h1 = new TThread("h1", test_func, (void*) 1);
    //thread_h1 = new TThread("h1", (void(*)(void *))&Readout_loop,(void*) this);
    thread_h1 = new TThread("h1", MyWorker::Readout_loop, (void*) this);
    thread_h1->Run();
}

void* MyWorker::Readout_loop(void *ptr)
{
    cout << "you are in Readout_loop()!" << endl;
//    while(1)
//    {
//        if(is_active_loop)
//        {

//        }
//        else
//        {

//        }
//    }

    return 0;
}

void MyWorker::DataAcquisition_Slot()
{
    cout << "you are in DataAcquisition_Slot()!" << endl;
    if(is_active_loop)
    {
       is_active_loop = false;
    }
    else
    {
        is_active_loop = true;
    }
}
