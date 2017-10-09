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


//using namespace std;


class MyClass
{
   RQ_OBJECT("MyClass")
private:
   std::vector<Int_t> fValue_vec;
public:
   MyClass() { fValue_vec.resize(5); }
   std::vector<Int_t> GetValue() const { return fValue_vec; }
   Int_t GetValue(Int_t index) const { return fValue_vec[index]; }
   void  SetValue(std::vector<Int_t>*); // *SIGNAL*
};

void MyClass::SetValue(std::vector<Int_t> *v)
{
    for (int i = 0; i < fValue_vec.size(); ++i)
    {
        fValue_vec[i] = v->at(i);
    }

    Emit("SetValue(std::vector<Int_t>*)", (Long_t)v);
}

void signal_slot_vector_bertrand()
{
    MyClass *objA = new MyClass();
    MyClass *objB = new MyClass();
    objA->Connect("SetValue(std::vector<Int_t>*)","MyClass",objB,"SetValue(std::vector<Int_t>*)");

    std::vector<Int_t> vec_a;
    vec_a.push_back(1);
    vec_a.push_back(2);
    vec_a.push_back(3);
    vec_a.push_back(4);
    vec_a.push_back(5);

    objA->SetValue(&vec_a);
    std::vector<Int_t> ret = objB->GetValue();
    for (int i = 0; i < ret.size(); ++i) {
//        cout << "objB->GetValue() : vector[" << i << "] = " << ret[i] << endl;
        cout << "objB->GetValue(" << i << ") = " << objB->GetValue(i) << endl;
    }
}
