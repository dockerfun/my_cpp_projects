#include <iostream>
using namespace std;

class X
{
public:
    X(void) { cout << 1 << endl; }
    ~X(void) { cout << 2 << endl; }
};

X *exec()
{
    X *x = new X();
    throw string("0");
    return x;
}

int main()
{

    /* code */
    X *x;
    try
    {
        delete exec();
    }
    catch (string &s)
    {
        cout << s << endl;
    }

    return 0;
}