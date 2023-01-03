#include <iostream>
using namespace std;

int op(int x, int y);

int main()
{
    float *pf;
    float f=0.9;

    pf=&f;
    cout << op(1, *pf);

    return 0;
}

int op(int x, int y) {
    return x*y;
}