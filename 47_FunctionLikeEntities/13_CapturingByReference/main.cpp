/**
 * FUNCTOR: 
 *  - Class objects that can be called like ordinary functions
 *  - We set them up by overloading the () operator for our class
*/

#include <iostream>
using namespace std;


int main(){
    
    /* code */
    int a{1};
    int b{4};
    int c{6};
    double some_var{3.2};

    auto func = [a, &b](int c, int d) /*mutable*/{
        //a++; // Compiler error without mutable keyword!
        b++;
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;

        std::cout << "c: " << c << std::endl;
        std::cout << "d: " << d << std::endl;

        //std::cout << "some var: " << some_var << std::endl; // Compiler error
     };

    func(10,20);
    //func(30, 21);

    std::cout << "a (outside): " << a << std::endl;
    std::cout << "b (outside): " << b << std::endl;


    // Mixing capturing
    // Code 1 : Mix by value and by reference
    auto func1 = [a, &b] (int x, int y){};

    // Code 2 : all by value, a by reference
    auto func2 = [=, &a] (int x, int y){};
    
    // Code 3 : All by reference, a by value
    auto func3 = [&, a] (int x, int y){};
    
    // Code 4 : capture all = and & must always come first
    //auto func4 = [a, b, &] (int x, int y){}; // compiler error 
    
    //auto func5 = [a, b, =] (int x, int y){}; // compiler error

    //auto func6 = [=a, =b] (int x, int y){}; // compiler error

    /* if you use =, you are no longer allowed to capture any
    other variable by value, similarly, if you use &, you cannot capture
    any other variable by reference. Some compilers may give a 
    warning, others an error. */
    // auto func7 = [=, &b, c](int x, int y){}; // Error

    // auto func8 = [&, b, &c](int x, int y){}; // Error
    
    std::cout << "end" << std::endl;

    return 0;
}