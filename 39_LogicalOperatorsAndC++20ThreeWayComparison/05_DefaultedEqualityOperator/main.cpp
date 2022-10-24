#include <iostream>
using namespace std;
#include "item.h"

int main(){
    
    /* code */
    Item a(2,1,4);
    Item b(2,1,4);

    std::cout << std::boolalpha;
    std::cout << "a==b : " << (a==b) << std::endl;
    std::cout << "a!=b : " << (a!=b) << std::endl;

    //Implicit conversions:
    /**
     * Works even for the first operand, when the operator is set up as a member
    */
    Item i1(12);
    Item i2(36);
    
    std::cout << std::boolalpha;
    std::cout << "i1 == i2 : " << (i1 == i2) << std::endl;
    std::cout << "i1 != i2 : " << (i1 != i2) << std::endl;
    std::cout << "i1 == 12 : " << (i1 == 12) << std::endl;
    std::cout << "36 == i2 : " << (36 == i2) << std::endl;
    std::cout << "i1 != 12 : " << (i1 != 12) << std::endl;
    std::cout << "36 != i2 : " << (36 != i2) << std::endl;
    return 0;
}