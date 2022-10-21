/**
 * Global variables
*/

#include <iostream>

int age{12};

const double distance {45.8}; //global variable

void print_age();
void print_distance();

int main(){
    
    /* code */
    std::cout << "non const global variables (extern linkage): " << std::endl;
    std::cout << "age(main): " << age << std::endl;
    std::cout << "&age(main): " << &age << std::endl;
    print_age();
    
    std::cout << std::endl;

    std::cout << "const global variables (internal linkage): " << std::endl;
    std::cout << "distance(main): " << distance << std::endl;
    std::cout << "&distance(main): " << &distance << std::endl;
    print_distance();

    return 0;
}

 