/**
 * Namespaces - Anonymous
 * 
 * A facility in the C++ programming language to avoid name conflicts
*/
#include <iostream>

namespace { //The compiler will generate an internal name to the namespace
    double add(double a, double b);
}

int main(){

    double result = ::add(10,20);
    std::cout << "result: " << result << std::endl;
    return 0;
}

namespace {
    double add(double a, double b){
        return a+b;
    }
}