#include "mymainframe.h"

MyMainFrame::MyMainFrame()
{

}

//void MyMainFrame::Draw_Graphs(Long_t cnt)
//{
//    //dummy
//    printf("You are in master Thread: event %d: \n", cnt);
//    //printf("You are in master Thread: at event %d values are: %d, %d, %d \n", counter, vec[0], vec[1], vec[2]);
//}

//void MyMainFrame::Draw_Graphs(std::vector<Int_t>* data)
//{
//    printf("You are in master Thread: values are: %d, %d, %d \n", data->at(0), data->at(1), data->at(2));
//}

//void MyMainFrame::Draw_Graphs(std::vector<std::vector<Int_t> >* data)
//{
//    printf("You are in master Thread: at event %d values are: %d \n", (*data)[0][0], (*data)[1][0]);
//}

void MyMainFrame::Draw_Graphs(DataStr* data_str)
{
    printf("You are in master Thread: at event %d values are: %d, %d \n", data_str->cnt, data_str->data_vv[0][0], data_str->data_vv[1][0]);
}
