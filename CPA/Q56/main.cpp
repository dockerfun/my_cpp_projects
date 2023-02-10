#include <iostream>
using namespace std;

class Uno
{
public:
    ~Uno() { cout << "X"; }
};

void foo(Uno *d)
{
    Uno e;
    *d = e;
}

int main()
{

    /* code */
    Uno *u = new Uno;
    foo(u);
    delete (u);

    return 0;
}