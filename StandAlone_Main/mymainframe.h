#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H

#include <TApplication.h>
#include <TGClient.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TRandom.h>
#include <TGButton.h>
#include <TRootEmbeddedCanvas.h>


#include <TQObject.h>
#include <RQ_OBJECT.h>
class TGWindow;
class TGMainFrame;
class TRootEmbeddedCanvas;
class MyMainFrame
{
    RQ_OBJECT("MyMainFrame")
private:
    TGMainFrame *fMain;
    TRootEmbeddedCanvas *fEcanvas, *fEcanvas_ch1, *fEcanvas_ch2, *fEcanvas_ch3, *fEcanvas_ch4, *fEcanvas_ch5;
public:
    MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
    virtual
    ~MyMainFrame();
    void DoDraw();
};

#endif // MYMAINFRAME_H
