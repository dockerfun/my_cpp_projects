#include <iostream>
using namespace std;

enum weekday
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
};

weekday operator+(weekday &w, int days)
{
    return static_cast<weekday>((static_cast<int>(w) + days) % 7);
}

int main()
{

    /* code */
    weekday d = sat;
    cout << d << endl;
    d = d + 1;
    cout << d << endl;

    return 0;
}