#include "TDatime.h"

void tdatime()
{
    TDatime t;
    cout << "Current time is " << t.GetHour() << "h:" << t.GetMinute() << "m:" << t.GetSecond() << "s" << endl;
}
