//root cern threads
#include "TThread.h"
#include <Riostream.h>

//root cern general
#include <TApplication.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TRandom.h>

//root cern GUI
#include <TGClient.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>
#include "TGFrame.h"
#include "TGTab.h"
#include <TQObject.h>
#include <RQ_OBJECT.h>



class MyClass
{
   RQ_OBJECT("MyClass")
private:
   Long_t fValue_arr[2];
public:
   MyClass() {}
   Long_t* GetValue() /*const*/ { return fValue_arr; }
   void  SetValue(Long_t *v); // *SIGNAL*
};

void MyClass::SetValue(Long_t *v)
{
    for (int i = 0; i < 2; ++i)
    {
        fValue_arr[i] = v[i];
    }

    Emit("SetValue(Long_t *)",v);
}

void signal_slot_array()
{
    MyClass *objA = new MyClass();
    MyClass *objB = new MyClass();
    objA->Connect("SetValue(Long_t *)","MyClass",objB,"SetValue(Long_t *)");

    Long_t arr_a[2];
    arr_a[0] = 11;
    arr_a[1] = 22;


    objA->SetValue(arr_a);

}
