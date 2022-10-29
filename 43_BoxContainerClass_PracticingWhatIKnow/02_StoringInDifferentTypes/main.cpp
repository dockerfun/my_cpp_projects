#include <iostream>
#include "boxcontainer.h"
#include "charcontainer.h"

int main(){
    
    /* code */
    BoxContainer box1;
    box1.dummy_initialize();

    std::cout << "box1 : " << box1 << std::endl;

    BoxContainer box2(box1); //using copy constructor
    
    std::cout << "box2 : " << box2 << std::endl;

    box2.add(12);
    std::cout << "box2 : " << box2 << std::endl;
    box2.add(12);
    std::cout << "box2 : " << box2 << std::endl;
    box2.add(12);
    std::cout << "box2 : " << box2 << std::endl;
    box2.add(12);
    std::cout << "box2 : " << box2 << std::endl;
    box2.add(47);
    std::cout << "box2 : " << box2 << std::endl;

    box2.add(43);
    std::cout << "box2 : " << box2 << std::endl;  
    box2.add(112);
    std::cout << "box2 : " << box2 << std::endl;  
    
    std::cout << std::endl;
    std::cout << "*********** REMOVE ITEMS **********" << std::endl;
    std::cout << std::endl;

    box2.remove_item(47);
    std::cout << "box2 : " << box2 << std::endl;  
    
    box2.remove_item(13);
    std::cout << "box2 : " << box2 << std::endl;   

    box2.remove_item(16);
    std::cout << "box2 : " << box2 << std::endl; 

    box2.remove_item(19);
    std::cout << "box2 : " << box2 << std::endl; 

    box2.remove_item(21);
    std::cout << "box2 : " << box2 << std::endl; 

    std::cout << std::endl;
    std::cout << "*********** REMOVE ALL **********" << std::endl;
    std::cout << std::endl;

    box2.remove_all(12);
    std::cout << "box2 : " << box2 << std::endl; 

    std::cout << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << std::endl;

    box2+=box1;
    std::cout << "operator+=: " << std::endl;
    std::cout << "box1 : " << box1 << std::endl;
    std::cout << "box2 : " << box2 << std::endl;
    box2+=box1;
    std::cout << "box2+=box1 : " << box2 << std::endl;

    std::cout << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << std::endl;

    
    std::cout << "operator=: " << std::endl;
    std::cout << "box1 : " << box1 << std::endl;
    std::cout << "box2 : " << box2 << std::endl;
    box2=box1;
    std::cout << "box2=box1 : " << box2 << std::endl;

    std::cout << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "operator+: " << std::endl;
    std::cout << "box1 : " << box1 << std::endl;
    std::cout << "box2 : " << box2 << std::endl;
    
    BoxContainer box3;
    box3.add(99);
    box3.add(78);
  
    std::cout << "box3 : " << box3 << std::endl;
    std::cout << "box1 + box3 : " << box1 + box3 << std::endl;

    std::cout << std::endl;
    //CharContainer
    CharContainer chars;
    chars.dummy_initialize();
    std::cout << "chars : " << chars << std::endl;


    return 0;
}