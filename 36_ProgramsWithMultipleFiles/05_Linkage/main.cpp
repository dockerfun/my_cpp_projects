/**
 * Linkage: A property associated with a name, that controls how
 * wide or narrow is the visibility of the name across translation
 * units.
 * 
 * Options: no linkage
 *          internal linkage (the name useless in other TU)
 *          external linkage (the name is accessable and can be used in
 *                            other TUs, separate where it was defined)
 *          module linkage   (later)
*/

#include <iostream>

void some_function(){
    int age{6}; //age has no linkage (1) cannot access from outside of this function
    std::cout << "age: " << age << ", &age: " << &age << std::endl;
}

//global variable
const double distance {45.8};

//external linkage
int item_count {6};

void print_distance();
void print_item_count();

int main(){
    
    /* code */
    std::cout << "distance: " << distance << ", " << std::endl;

    print_distance();

    std::cout << std::endl;

    std::cout << "item count: " << item_count << std::endl;
    print_item_count();

    return 0;
}

 