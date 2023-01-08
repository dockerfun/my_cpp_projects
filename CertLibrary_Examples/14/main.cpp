#include <iostream>
using namespace std;
int main()
{
    const int x=20;
    const int *ptr;
    ptr = &x;
    *ptr = 10;
    cout<<*ptr;
    return 0;
}