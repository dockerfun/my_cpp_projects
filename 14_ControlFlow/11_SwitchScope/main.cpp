#include <iostream>
using namespace std;

int int_condition{0};

int main(){
    
    /* code */
    switch (int_condition) //one giant scope
    {
        int x;
        //int x{4};//Compiler error
    case 0:
        /* code */
        cout << "0" << endl;
        //int d{4};//Compiler error
        x=3;
        //z=8;//Error: can be used only after its declaration
        break;
    case 1:
        /* code */
        cout << "1" << endl;
        x=5;
        int z;
        //int t{3};//Compiler error
        break;    
    default:
        z=3;
        int u{8};
        break;
    }   
    
    return 0;
}