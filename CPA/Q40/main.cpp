#include <iostream>
using namespace std;

class X
{
public:
    X(void);
    ~X(void);
};

X::X(void)
{
    cout << 0;
}

X::~X(void)
{
    cout << 2;
}

int main()
{

    /* code */
    try
    {
        X *x = new X();
        throw true;
        delete x;
    }
    catch (bool s)
    {
        std::cout << s;
    }

    return 0;
}