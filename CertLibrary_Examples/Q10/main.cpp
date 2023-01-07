#include <iostream>
using namespace std;

void fun(int*);

int main()
{
    int i=2;
    fun(&i);

    cout << i;

    return 0;
}

void fun(int *i)
{
    *i = *i**i; //4
}