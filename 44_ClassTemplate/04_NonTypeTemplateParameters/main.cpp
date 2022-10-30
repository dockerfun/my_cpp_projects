#include <iostream>
#include "boxcontainer.h"
#include "point.h"
#include "map.h"

int main(){
    
    /* code */
    Map map1(111122, std::string{"Steve Murphy"});
    std::cout << map1.m_key << " " << map1.m_value << std::endl; 

    BoxContainer<int, 10> box1;
    box1.add(10);

    std::cout << box1 << std::endl;

    // Point
    Point<int, 33> p1(10,20);
    Point<double, 33.2> p2(2.11, 5.44); //Separate instance will be created

    std::cout << p2.m_x << ", " << p2.m_y << std::endl;
  
    return 0;
}