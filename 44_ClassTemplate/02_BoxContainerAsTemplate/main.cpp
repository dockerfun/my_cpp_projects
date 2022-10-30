#include <iostream>
#include "boxcontainer.h"
#include "point.h"
#include "map.h"

int main(){
    
    /* code */
    Map map1(111122, std::string{"Steve Murphy"});
    std::cout << map1.m_key << " " << map1.m_value << std::endl; 

    // BoxContainer<int> box1;
    // box1.add(10);
    // box1.add(39);
    // box1.add(99);
    // box1.add(887);
    // box1.add(65);
    // box1.add(345);
    
    // std::cout << "box1 : " << box1 << std::endl;

    // BoxContainer<Point> points;

    // Point p1(1.3, 4.5);
    // Point p2(4, 2.1);

    // points.add(p1);
    // points.add(p2);
    
    // std::cout << "box1 : " << points << std::endl;

  
    return 0;
}