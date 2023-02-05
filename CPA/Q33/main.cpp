//Clang
#include <iostream>
#include <stdexcept>
using namespace std;

void f(void){
    throw exception("?");
}

int main(){
    
    /* code */
    int a = 4;
    try{
        f();
    } 
    // catch(...){
    //     a++;
    // }
    catch(exception &e){
        a--;
    }


    cout << a << endl;
    return 0;
}