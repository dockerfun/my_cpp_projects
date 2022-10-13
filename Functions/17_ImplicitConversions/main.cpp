#include <iostream>
using namespace std;

#include "array.h"

int main(){

    //Implicit conversion
    int a{20};
    int b{2};

    print_sum(a,b);

    double c{10.1};
    double d{30.2};

    print_sum(c,d);

    string a1{"4.6"};
    string b1{"6.7"};
    
    //print_sum(a1,b1);//Compiler error
    

    return 0;
}