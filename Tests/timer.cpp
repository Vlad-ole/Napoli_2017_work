#include "TStopwatch.h"

void timer()
{
    TStopwatch t;

    double total_time = 0;

    //t.Start();
    for (int i = 0; i < 10; ++i)
    {
        t.Start();
        gSystem->Sleep(300);
        t.Stop();

        total_time += t.RealTime();

        gSystem->Sleep(100);
    }



    cout << "time = " << total_time << endl;

}
