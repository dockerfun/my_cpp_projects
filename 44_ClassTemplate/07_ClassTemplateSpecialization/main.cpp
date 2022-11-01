#include <iostream>
#include "boxcontainer.h"
#include "point.h"
#include "adder.h"

int main(){
    
    /* code */
    Adder<int> adder_int;
    adder_int.do_something();
    std::cout << adder_int.add(10,20) << std::endl;

    char str1[20] {"Hello"};
    char str2[] {" World"};
    Adder<char*> adder_c_str;

    //adder_c_str.do_something();
    std::cout << adder_c_str.add(str1, str2) << std::endl;

    std::cout << "End" << std::endl;
  
    return 0;
}