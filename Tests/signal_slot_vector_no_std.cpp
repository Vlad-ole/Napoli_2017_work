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
   vector<Int_t> fValue_vec;
public:
   MyClass() { fValue_vec.resize(5); }
   vector<Int_t> GetValue() const { return fValue_vec; }
   void  SetValue(vector<Int_t>); // *SIGNAL*
};

void MyClass::SetValue(vector<Int_t> v)
{
    for (int i = 0; i < fValue_vec.size(); ++i)
    {
        fValue_vec[i] = v[i];
    }

    Emit("SetValue(vector<Int_t>)",v);
}

void signal_slot_vector_no_std()
{
    MyClass *objA = new MyClass();
    MyClass *objB = new MyClass();
    objA->Connect("SetValue(vector<Int_t>)","MyClass",objB,"SetValue(vector<Int_t>)");

    vector<Int_t> vec_a;
    vec_a.push_back(1);
    vec_a.push_back(2);
    vec_a.push_back(3);
    vec_a.push_back(4);
    vec_a.push_back(5);

    objA->SetValue(vec_a);

}