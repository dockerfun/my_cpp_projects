#include <iostream>

extern int age; //declaration

const double distance {32.4}; //this is not a declaration
                              //It is a definition

//Definition
void print_age(){
     std::cout << "age(main): " << age << std::endl;
     std::cout << "&age(main): " << &age << std::endl;
}

void print_distance(){
     std::cout << "distance(main): " << distance << std::endl;
     std::cout << "&distance(main): " << &distance << std::endl;
}