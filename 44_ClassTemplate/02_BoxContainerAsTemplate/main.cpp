#include <iostream>
#include "boxcontainer.h"

int main(){
    
    /* code */
    BoxContainer<int> box1;
    box1.add(10);
    box1.add(39);
    box1.add(99);
    box1.add(887);
    box1.add(65);
    box1.add(345);
    
    std::cout << "box1 : " << box1 << std::endl;

    return 0;
}