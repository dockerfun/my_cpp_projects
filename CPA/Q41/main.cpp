#include <iostream>
using namespace std;

class X
{
public:
    X(void) { cout << 2; }
    ~X(void) { cout << 5; }
    void exec() { throw string("0"); }
};

void exec(X x)
{
    x.exec();
}

int main()
{

    /* code */
    X x;
    try
    {
        exec(x);
    }
    catch (int &i)
    {
        cout << i;
    }

    return 0;
}