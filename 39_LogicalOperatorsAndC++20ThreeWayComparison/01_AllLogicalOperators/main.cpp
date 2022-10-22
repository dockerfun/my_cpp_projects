/**
 *  LOGICAL OPERATORS
*/

#include <iostream>
#include "point.h"

int main(){
    
    /* code */

    /**
     *  COMPARISON OPERATORS *
     *
     */

    Point point1(10.0, 13.2);
    Point point2(32.1, 65.7);

    std::cout << "point 1 : " << point1 << std::endl;
    std::cout << "point 2 : " << point2 << std::endl;

    std::cout << std::boolalpha <<  "p1>p2 : " << (point1 > point2) << std::endl; 
    std::cout << std::boolalpha <<  "p1<p2 : " << (point1 < point2) << std::endl; 
    std::cout << std::boolalpha <<  "p1>=p2 : " << (point1 >= point2) << std::endl; 
    std::cout << std::boolalpha <<  "p1<=p2 : " << (point1 <= point2) << std::endl; 
    std::cout << std::boolalpha <<  "p1!=p2 : " << (point1 != point2) << std::endl; 

    return 0;
}