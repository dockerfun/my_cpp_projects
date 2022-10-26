#include <iostream>
using namespace std;

void f3();
void f2();
void exception_thrower();

void f1(){
    cout << "Starting f1()" << endl;
    //3
    try{
        f2();
    }catch(int ex){
        cout << "f1() catched exception: " << ex << endl;
    }
    cout << "Ending f1()" << endl;
}
void f2(){
    cout << "Starting f2()" << endl;
    //2
    try{
        f3();
    }catch(int ex){
        cout << "f2() catched exception: " << ex << endl;
    }
    cout << "Ending f2()" << endl;
}
void f3(){
    cout << "Starting f3()" << endl;
    //1
    try{
            exception_thrower();
    }catch(int ex){
        cout << "f3() catched exception: " << ex << endl;
    }
    cout << "Ending f3()" << endl;
}

int main(){
    
    /* code */
    try{
        f1();
        cout << "function calls end successfuly" << endl;
    }catch(int ex){
        cout << "Exception catched: " << ex << endl;
    }
  
    cout << "End. " << endl;
    
    return 0;
}

void exception_thrower(){
    cout << "starting exception_thrower()" << endl;
    throw 0;
    cout << "ending exception_thrower()" << endl;
}