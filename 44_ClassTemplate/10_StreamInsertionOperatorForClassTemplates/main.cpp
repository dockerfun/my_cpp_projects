#include <iostream>
#include "boxcontainer.h"
#include "point.h"
#include "adder.h"
#include "templateclass.h"

int main(){
    
    /* code */
    BoxContainer<int> obj1;
    obj1.add(10);
  
    std::cout << obj1 << std::endl;
    std::cout << "End" << std::endl;
  
    return 0;
}