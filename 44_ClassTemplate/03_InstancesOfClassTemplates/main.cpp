#include <iostream>
#include "boxcontainer.h"
#include "point.h"
#include "map.h"

int main(){
    
    /* code */
    Map map1(111122, std::string{"Steve Murphy"});
    std::cout << map1.m_key << " " << map1.m_value << std::endl; 

  
    return 0;
}