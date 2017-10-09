#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H

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

//my
#include "myworker.h"


class TGWindow;
class TGMainFrame;
class TRootEmbeddedCanvas;
class MyMainFrame
{
    RQ_OBJECT("MyMainFrame")
private:
    TGMainFrame *fMain;
    TRootEmbeddedCanvas *fEcanvas, *fEcanvas_ch1, *fEcanvas_ch2, *fEcanvas_ch3, *fEcanvas_ch4, *fEcanvas_ch5;
    TRootEmbeddedCanvas *fEcanvas_evergy_spectrum, *fEcanvas_Npe_vs_time;

    TThread *thread_h1;
    MyWorker *worker;

    TGTextButton *button_start;
    bool is_start_button_activated;

    Pixel_t pixel_t_yellow;
    Pixel_t pixel_t_red;

public:
    MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
    virtual
    ~MyMainFrame();
    void DoDraw();


    void Clicked_start_button();
    void *DataAcquisition(void *ptr);
};

#endif // MYMAINFRAME_H
