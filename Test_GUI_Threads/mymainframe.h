#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H

#include "myworker.h"
#include "TF1.h"

class MyMainFrame
{
    RQ_OBJECT("MyMainFrame")
public:
    void DoDraw(DataStr* data_str);
    MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
    TGMainFrame *fMain;
    virtual ~MyMainFrame();

private:
    Long_t counter;
    TF1 *f1;
    TRootEmbeddedCanvas *fEcanvas;
    TCanvas *fCanvas;
};

#endif // MYMAINFRAME_H
