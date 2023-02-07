#include <iostream>
using namespace std;

enum weekday
{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};
const char * weekdayLong[] = {
    "SUNDAY",
    "MONDAY",
    "TUESDAY",
    "WEDNESDAY",
    "THURSDAY",
    "FRIDAY",
    "SATURDAY"
};

weekday operator+(weekday day, int days)
{
    return static_cast<weekday>((static_cast<int>(day) + days) % 7);
}

ostream &operator<<(ostream &strm, weekday day)
{   
    strm <<  weekdayLong[static_cast<weekday>(day)] << endl;
    return strm;
}

int main()
{

    /* code */
    weekday d = SAT;
    d = d + 16;
    cout << d << endl; //MONDAY

    cout << weekday(2) << endl; //TUESDAY

    return 0;
}