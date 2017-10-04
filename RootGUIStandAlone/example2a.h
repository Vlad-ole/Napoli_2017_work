#ifndef EXAMPLE2A_H
#define EXAMPLE2A_H

#include <TQObject.h>
#include <RQ_OBJECT.h>
class TGWindow;
class TGMainFrame;
class TRootEmbeddedCanvas;
class MyMainFrame {
    RQ_OBJECT("MyMainFrame")
    private
        :
          TGMainFrame         *fMain;
    TRootEmbeddedCanvas *fEcanvas;
    public
    :
    MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
    virtual
    ~MyMainFrame();
    void DoDraw();
};

#endif // EXAMPLE2A_H
