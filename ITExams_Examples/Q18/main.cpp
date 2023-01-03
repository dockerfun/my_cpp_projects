#include <iostream>
using namespace std;

int main (int argc, const char * argv[])
{
    int i=10;
    {
        int i=0;
        cout<<i;
    } 

    cout<<i;

    return 0;
}   