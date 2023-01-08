#include <iostream>
using namespace std;

int main(){
    
    /* code */
    for (float val=-10.0; val<100.0; val=-val*2){
        if(val<0 && -val>=20)
            break;
        cout << "*";
    }
    
    return 0;
}