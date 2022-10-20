#include <iostream>
using namespace std;

#include "array.h"

int main(){

    //Implicit conversion with pointers
    int a{3};
    int b{5};

    double c{4.5};
    double d{67.7};

    print_sum(&a, &b);
    //print_sum(&c, &d); //Error: cannot conver from double to int 

    return 0;
}