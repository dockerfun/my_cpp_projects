#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{
    int x,y;
    
    union t
    {
        char tab[2];
        int i;
    };
    
    union t u;
    u.tab[0] = 1;
    u.tab[1] = 2;
    u.i = 0;
    x = u.tab[0];
    y = u.tab[1];

    cout << x << "," << y << "," << u.i; 
    return 0;
}