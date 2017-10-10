#ifndef MYMAINFRAME_H
#define MYMAINFRAME_H

#include "worker.h"

class MyMainFrame
{
    RQ_OBJECT("MyMainFrame")
public:
    MyMainFrame();
    //void Draw_Graphs(Long_t cnt);
//    void Draw_Graphs(std::vector<Int_t>* data);
    void Draw_Graphs(std::vector<std::vector<Int_t> >* data);
    //void Draw_Graphs(std::vector<std::vector<Int_t>* >* data);
private:
    Long_t counter;
};

#endif // MYMAINFRAME_H
