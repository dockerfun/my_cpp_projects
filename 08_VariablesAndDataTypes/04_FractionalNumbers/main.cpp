#include <iostream>
#include <iomanip> //setprecision
using namespace std;

int main(){
    
    /* code */
    /**
     * float, size: 4 bytes, precision: 7 bytes
     * double,      8                  15
     * long double 12                  > double
     * 
    */

    //declare and initialize variables:
    float number2{1.12345678901234567890f};
    double number3{1.12345678901234567890};
    long double number4{1.12345678901234567890L};

    // print out sizes
    cout << "sizeof float: " << sizeof(float) << endl;
    cout << "sizeof double: " << sizeof(double) << endl;
    cout << "sizeof long double: " << sizeof(long double) << endl;
    
    cout << setprecision(20); //control the precision from std::cout
    cout << "number2: " << number2 << endl;
    cout << "number3: " << number3 << endl;
    cout << "number4: " << number4 << endl;

    // Precision gone wrong
    //float number5 {192400023}; // Float can handle only 7 digits
    
    // Problem not caught at compile time
    float number5 (192400023);
    number5 = number5 + 1;
    cout << "number5 is: " << number5 << endl;

    //scientific notation
    double number6 {192400023};
    double number7 {1.92400023e8};
    double number8 {1.924e8};
    double number9 {0.00000000003498};
    double number10{3.498e-11};

    cout << "number6 is: " << number6 << endl;
    cout << "number7 is: " << number7 << endl;
    cout << "number8 is: " << number8 << endl;
    cout << "number9 is: " << number9 << endl;
    cout << "number10 is: " << number10 << endl;

    

    return 0;
}