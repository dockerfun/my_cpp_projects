#include <iostream>

const double distance {32.4};
extern int item_count; //declaration of a variable can be found in another translation unit
void print_distance(){
     std::cout << "distance(other_file): " << distance << std::endl;
}

void print_item_count(){
    std::cout << "Item count from other file: " << item_count << std::endl;
}