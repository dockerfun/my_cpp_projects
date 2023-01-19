#include <iostream>
using namespace std;

class X {};

class Y : public X {};
class Z : public X {};

int main(){
    
    /* code */
    Z *z = new Z();
    Y *y = new Y();

    z = y;

    cout << (z == y) << endl;
    
    return 0;
}