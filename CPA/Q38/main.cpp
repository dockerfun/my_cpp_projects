#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class E
{
};

class X
{
public:
    static int c;
    X(int a) { c = a; }
    ~X() //noexcept(false)
    {
        if (c++ > 2)
            throw new E;
    }
};

int X::c = 0;

void f(int i)
{
    X *t[2];
    for (int j = 0; j < i; j++)
        t[j] = new X(i + 1);
    for (int j = 0; j < i; j++)
        delete t[j];
}

int main()
{

    /* code */
    try
    {
        f(2);
    }
    catch (...)
    {
        cout << X::c;
    }

    return 0;
}