//#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <vector>

#include "TRandom.h"

using namespace std;

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    ofstream file_out("/home/darkside/Vlad_Programs/vlad_rawdata_2017/TestData/run_1_ch0.txt", ios::out);

    if (file_out.is_open())
    {
        cout << "file is good" << endl;
    }
    else
    {
        cout << "file was not opened" << endl;
        exit(1);
    }

    const int n_points = 1000;
    const int baseline = 4000;

    TRandom rnd;
    bool is_generate_signal = true;
    bool is_signal = false;

    for (int i = 0; i < n_points; ++i)
    {
        double adc_value;

//        if (is_generate_signal)
//        {
//            Double_t rnd_num = rnd.Uniform();
//            if (rnd_num < 0.1)
//            {
//               is_signal = true;
//               is_generate_signal = false;
//            }
//        }

        adc_value = rnd.Uniform(-10, 10) + baseline;
//        if (condition)
//        {

//        }


        file_out << adc_value << endl;
    }

    file_out.close();


//    return a.exec();
    cout << "all is ok" << endl;
    return 0;
}
