/**
 * THIS IS A SEPARATE TRANSLATION UNIT - TU 
*/

#include <iostream>

extern const double distance; //Declaring const double variable, defined in some_other_file

//Definition
namespace {
     void some_function(){
          std::cout << "some_function_called ... " << std::endl;
     }
}

// static void some_function(){
//      std::cout << "some_function_called ... " << std::endl;
// }

void print_distance(){
     //++distance; //Error: cannot modify a read only variable
     std::cout << "distance(some_other_file): " << distance << std::endl;
     std::cout << "&distance(some_other_file): " << &distance << std::endl;
}