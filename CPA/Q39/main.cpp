#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class X : public runtime_error
{
public:
    X() : domain_error('0'){};
};

void z()
{
    X x;
    throw x;
    cout << 1;
}

int main()
{

    /* code */
    X x;
    try
    {
        z();
    }
    catch (X &i)
    {
        cout << 1;
    }
    catch (domain_error &i)
    {
        cout << 0;
    }

    return 0;
}