#include <iostream>
using namespace std;

int main(){
    
    /* code */
    signed int value1{10};
    signed int value2{-300};

    //unsigned int value3{-200}; //Compiler error

    short short_var{-32768};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    cout << "size_of short var: " << sizeof(short_var) << endl; // 2

    int int_var{55}; //4
    signed signed_var{66};
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    long long_var{88}; //4 or 8 bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    cout << "sizeof long_long_int: " << sizeof(long_long_int) << endl;
    cout << "sizeof signed_long_long_int: " << sizeof(signed_long_long_int) << endl;
    cout << "sizeof unsigned_long_long_int: " << sizeof(unsigned_long_long_int) << endl;
    
    
    return 0;
}