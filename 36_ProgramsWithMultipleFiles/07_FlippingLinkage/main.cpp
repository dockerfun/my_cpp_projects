/**
 * Global variables
*/

#include <iostream>

//internal linkage by default if const -> linkage
extern const double distance {45.9}; //declaration & definition

void some_function(); //declaration  
void print_distance(); //declaration

int main(){
    
    /* code */
    std::cout << "distance(main): " << distance << std::endl;
    std::cout << "&distance(main): " << &distance << std::endl;

    std::cout << std::endl;
    print_distance();

    std::cout << std::endl;
    some_function();

    return 0;
}

 