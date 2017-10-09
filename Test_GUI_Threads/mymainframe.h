#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H

#include "worker.h"

class MyMainFrame
{
    RQ_OBJECT("MyMainFrame")
public:
    MyMainFrame();
    void Draw_Graphs();
private:
    Long_t counter;
};

#endif // MYMAINFRAME_H
