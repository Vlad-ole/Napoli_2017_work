#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H


//c++
#include <sstream>
#include <iomanip>

//root cern general
#include <TApplication.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TH1.h>
#include <TGraph.h>
#include <TRandom.h>
#include "TAxis.h"
#include "TStopwatch.h"
#include "TMath.h"
#include "TLine.h"
#include "TDatime.h"
#include "TROOT.h"

//root cern Thread
#include "TThread.h"
#include <Riostream.h>

//root cern GUI
#include <TGClient.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>
#include "TGFrame.h"
#include "TGTab.h"
#include "TGNumberEntry.h"
#include "TGLabel.h"
#include <TQObject.h>
#include <RQ_OBJECT.h>
#include "TGTextView.h"
#include <Getline.h>

//to show thread_id for linux systems
#include <sys/types.h>
#include <sys/syscall.h>

class MyMainFrame
{
public:
    MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
    virtual ~MyMainFrame();

    void RunThread();

private:
    static void *ReadoutLoop(void*);

    TGMainFrame *fMain;
    TGTextView *twStatus_label;

    TThread *slave_thread;
};

#endif // MYMAINFRAME_H
