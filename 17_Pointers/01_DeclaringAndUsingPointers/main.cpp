#include <iostream>
using namespace std;

int main(){

    int * p_number {};
    double * p_fractional_number {};

    int * p_number1 {nullptr};
    double * p_fractional_number1 {nullptr};

    cout << "Size of number pointer: " << sizeof(p_number) << ", size of int: " << sizeof(int) << endl;
    cout << "Size of fractional_number pointer: " << sizeof(p_fractional_number) << ", size of double: " << sizeof(double) << endl;
    cout << "Size of number1 pointer: " << sizeof(p_number1) << ", size of int: " << sizeof(int) << endl;
    cout << "Size of fractional_number1 pointer: " << sizeof(p_fractional_number1) << ", size of double: " << sizeof(double) << endl;


    int int_var {54};
    int *p_int{&int_var};

    cout << "int_var : " << int_var << endl;
    cout << "p_int (Address in memory) : " << p_int << endl;

    int int_var1 {23};
    int_var1 = 127;

    p_int = &int_var1;

    cout << "p_int (with different address) : " << p_int << endl;

    //Dereferencing a pointer
    int * p_int2 {nullptr};
    int int_data {56};
    p_int2=&int_data;

    cout << "value: " << *p_int2 << endl;
    
    return 0;
}