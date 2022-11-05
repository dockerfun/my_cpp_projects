/**
 * FUNCTOR: 
 *  - Class objects that can be called like ordinary functions
 *  - We set them up by overloading the () operator for our class
*/

#include <iostream>
#include "boxcontainer.h"
#include <functional>
using namespace std;


int main(){
    
    /* code */
    int a{1};
    int b{4};
    double some_var{3.2};

    auto func = [a, some_var, b](int c, int d) /*mutable*/{
        //a++; // Compiler error without mutable keyword!
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;

        std::cout << "c: " << c << std::endl;
        std::cout << "d: " << d << std::endl;

        std::cout << "some var: " << some_var << std::endl; // Compiler error
     };

    func(10,20);
    func(30, 21);

    std::cout << "end" << std::endl;

    return 0;
}