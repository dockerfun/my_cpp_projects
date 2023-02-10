#include <iostream>
using namespace std;

class Uno {
public:
    int x = 0;
    Uno(){ cout << "X"; }
};

Uno foo(Uno d){
    Uno e = d;
    return e;
}

int main(){
    
    /* code */
    Uno u;
    u.x = 2;
    foo(u);

    return 0;
}