#include <iostream>
#include "myworker.h"

//#define DEBUG

using namespace std;

void* test_func(void *ptr)
{
    cout << "you are in test_func(void *ptr)!" << endl;
    return 0;
}

//initialize static members
bool MyWorker::is_active_loop = false;
TThread *MyWorker::thread_h1 = new TThread("h1", MyWorker::Readout_loop);

MyWorker::MyWorker()
{
    //is_active_loop = false;
    //thread_h1 = new TThread("h1", test_func, (void*) 1);
    //thread_h1 = new TThread("h1", (void(*)(void *))&Readout_loop,(void*) this);
    //thread_h1 = new TThread("h1", MyWorker::Readout_loop, (void*) this);
    thread_h1->Run();
}

void* MyWorker::Readout_loop(void *ptr)
{
    cout << "you are in Readout_loop()!" << endl;
    while(1)
    {
        if(is_active_loop)
        {
            //do some useful work


#ifdef DEBUG
            thread_h1->Sleep(1);//immitate some activity
            cout << "is_active_loop ==" << is_active_loop << endl;
#endif // DEBUG
        }
        else
        {
            //Wait permisstion to read data
            //well, it is not the best solution, but it works. Later I will realise this using signal/slot
            thread_h1->Sleep(1);
#ifdef DEBUG
            cout << "is_active_loop ==" << is_active_loop << endl;
#endif // DEBUG
        }
    }

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
