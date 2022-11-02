#include <iostream>
#include "point.h"
#include <type_traits>

int main(){
    
    /* code */
    Point<int> p1(10,31);
    std::cout << p1 << std::endl;

    Point<double> p2(2.1,3.1);
    std::cout << p2 << std::endl;


    std::cout << "End" << std::endl;
  
    return 0;
}