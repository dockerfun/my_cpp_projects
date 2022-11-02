#include <iostream>
#include "boxcontainer.h"
#include <memory>

void populate_box(BoxContainer<int>& box, int modifier){
    for(size_t i{0};i<4;++i){
        box.add((i+1)*modifier);
    }
}

// Copy version
// template<class T>
// void swap_data(T& a, T& b)
// {
//     T temp{a};
//     a = b;
//     b = temp;
// }

// Move version
template<class T>
void swap_data(T& a, T& b)
{
    T temp{std::move(a)};//Tells the compiler to treat lvalue as rvalue
    a = std::move(b);
    b = std::move(temp);
}

int main(){
    
    /* code */
    BoxContainer<int> box1;
    populate_box(box1, 2);

    std::cout << "box1: " << box1 << std::endl;

    //BoxContainer<int> box2(box1); // Compiler error -> copy assign deleted!

    // BoxContainer is a move only type
    BoxContainer<int> box2(std::move(box1));

    std::cout << "box1: " << box1 << std::endl;
    std::cout << "box2: " << box2 << std::endl;

    std::cout << "-----------------------" << std::endl;

    //Using smart pointers

    std::unique_ptr<int> ptr_int = std::make_unique<int>(33);

    //std::unique_ptr<int> ptr_int_copy = ptr_int; // Compiler error

    std::unique_ptr<int> ptr_int_copy = std::move(ptr_int); // This works
    
    if(!ptr_int){
        std::cout << "ptr_int doesn't contain any valid data" << std::endl; 
    }
  
    std::cout << "End" << std::endl;

  
    return 0;
}