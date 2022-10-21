#include <iostream>
#include "utility.h"

inline int age{12};

inline void some_function(){
    std::cout << "age: " << age << std::endl;
    std::cout << "&age: " << &age << std::endl;
}

void print_age_1(){
    some_function();
}