#ifndef MYWORKER_H
#define MYWORKER_H


//c++
#include <iostream>
#include <vector>


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

//threads
#include "TThread.h"

class MyWorker
{
    RQ_OBJECT("MyWorker")
public:
    MyWorker();

    void *Readout_loop(void *ptr);
    void DataAcquisition_Slot();

private:
    bool is_active_loop;
    TThread *thread_h1;
    std::vector<double> ch_data;
};

#endif // MYWORKER_H
