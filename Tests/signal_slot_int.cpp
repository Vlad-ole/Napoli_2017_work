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

using namespace std;

class MyClass
{
   RQ_OBJECT("MyClass")
private:
   Int_t fValue;
public:
   MyClass() { fValue=0; }
   Int_t GetValue() const { return fValue; }
   void  SetValue(Int_t); // *SIGNAL*
};

void MyClass::SetValue(Int_t v)
{
   if (v != fValue)
   {
      fValue = v;
      Emit("SetValue(Int_t)",v);
   }
}

void siglan_slot_int()
{
    MyClass *objA = new MyClass();
    MyClass *objB = new MyClass();
    objA->Connect("SetValue(Int_t)","MyClass",objB,"SetValue(Int_t)");

    //objB->SetValue(11);
    objA->SetValue(79);
    cout << "objA->GetValue()" << objA->GetValue() << endl;
    cout << "objB->GetValue()" << objB->GetValue() << endl;
}
