#include "mymainframe.h"

MyMainFrame::MyMainFrame()
{

}

void MyMainFrame::DoDraw(DataStr* data_str)
{
    printf("You are in master Thread: at event %d values are: %d, %d \n", data_str->cnt, data_str->data_vv[0][0], data_str->data_vv[1][0]);
}
