#include <iostream>
using namespace std;

#include "array.h"

int main(){

    //Implicit conversion with references
    int int_value{12};
    double double_value{52.7};

    cout << "Passing in int arguments" << endl;
    print_out(int_value);
    increment(int_value);
    print_out(int_value);

    cout << endl;

    //Passing double arguments
    cout << "Passing in double arguments" << endl;
    print_out(double_value);
    //increment(double_value);//only works if the parameter is const
    print_out(double_value);
    

    return 0;
}