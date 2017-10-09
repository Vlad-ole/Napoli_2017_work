#include "TThread.h"
#include <Riostream.h>

class MyClass
{
public:

    MyClass()
    {

    }

    static void *func(void *ptr)
    {
        std::cout << ("In handle_member(void *ptr)") << std::endl;
        return 0;
    }
};

void *handle(void *ptr)
{
   TThread::Printf("In handle(void *ptr)");
   return 0;
}

void handle_as_class_member()
{
#ifdef __CINT__
   printf("This script can only be executed via ACliC: .x threads.C++\n");
   return;
#endif

   MyClass *my_class_obj = new MyClass();

   //TThread *h1 = new TThread("h1", handle, (void*) 1);
   TThread *h1 = new TThread("h1", MyClass::func, (void*) my_class_obj);
   h1->Run();
}

