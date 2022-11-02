#include <iostream>
#include "boxcontainer.h"

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

    BoxContainer<int> box2;
    populate_box(box2, 15);

    std::cout << "******************" << std::endl;

    std::cout << "box1: " << box1 << std::endl;
    std::cout << "box2: " << box2 << std::endl;

    std::cout << "******************" << std::endl;

    swap_data(box1, box2);

    std::cout << "******************" << std::endl;
   
    std::cout << "box1 : " << box1 << std::endl;
    std::cout << "box2 : " << box2 << std::endl;

    std::cout << "******************" << std::endl;
  
    std::cout << "End" << std::endl;
  
    return 0;
}