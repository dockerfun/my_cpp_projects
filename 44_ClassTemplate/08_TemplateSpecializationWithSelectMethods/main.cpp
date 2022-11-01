#include <iostream>
#include "boxcontainer.h"
#include "point.h"
#include "adder.h"

int main(){
    
    /* code */
    BoxContainer<int> box1;
    box1.add(2);
    box1.add(4);
    box1.add(1);
    box1.add(6);
    box1.add(75);
    box1.add(23);
    box1.add(12);
    box1.add(42);
    box1.add(54);
    box1.add(78);
    box1.add(91);
    
    std::cout << "max index: " << box1.get_max_index() << std::endl;

    BoxContainer<const char*> box2_ptr;
    box2_ptr.add("Zoo");
    box2_ptr.add("World");
    
    std::cout << "max index: " << box2_ptr.get_max_index() << std::endl; // Zoo

    std::cout << "End" << std::endl;
  
    return 0;
}