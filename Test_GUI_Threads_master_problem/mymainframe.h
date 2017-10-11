#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H

//root cern general
#include "TF1.h"
#include "TGraph.h"
#include <TRandom.h>
#include "TCanvas.h"

#include "TThread.h"
#include <Riostream.h>

//root cern GUI
#include <TGClient.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>
#include "TGFrame.h"
#include "TGTab.h"
#include <TQObject.h>
#include <RQ_OBJECT.h>

//to show thread_id for linux systems
#include <sys/types.h>
#include <sys/syscall.h>

#include "worker.h"
class Worker;//forward declaration

class MyMainFrame
{
    RQ_OBJECT("MyMainFrame")
public:
    MyMainFrame();
    void Draw_Graphs(DataStr data_str);
    void StartThread();
    virtual ~MyMainFrame();

    Worker *worker;
    TThread *h1;
private:
    TGMainFrame *fMain;
    TRootEmbeddedCanvas *fEcanvas;
};

#endif // MYMAINFRAME_H
