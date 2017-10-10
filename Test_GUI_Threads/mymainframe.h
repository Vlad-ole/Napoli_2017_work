#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H

#include "myworker.h"

class MyMainFrame
{
    RQ_OBJECT("MyMainFrame")
public:
    //MyMainFrame();
    void DoDraw(DataStr* data_str);

    //added
    MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
    TGMainFrame *fMain;
    virtual ~MyMainFrame();

private:
    Long_t counter;
};

#endif // MYMAINFRAME_H
