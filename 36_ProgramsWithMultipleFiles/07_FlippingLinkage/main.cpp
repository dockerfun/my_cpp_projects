/**
 * Global variables
*/

#include <iostream>

extern const double distance {45.9}; //declaration & definition

void some_funtion();
void print_distance();

int main(){
    
    /* code */
    std::cout << "distance(main): " << distance << std::endl;
    std::cout << "&distance(main): " << &distance << std::endl;

    std::cout << std::endl;
    print_distance();

    std::cout << std::endl;
    some_funtion();

    return 0;
}

 