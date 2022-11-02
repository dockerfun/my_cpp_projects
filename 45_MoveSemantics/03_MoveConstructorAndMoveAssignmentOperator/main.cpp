#include <iostream>
#include "boxcontainer.h"

void populate_box(BoxContainer<int>& box, int modifier){
    for(size_t i{0};i<20;++i){
        box.add((i+1)*modifier);
    }
}

BoxContainer<int> make_box(int modifier){
    BoxContainer<int> local_int_box(20);
    populate_box(local_int_box, modifier);
    return local_int_box;
}

int main(){
    
    /* code */
    BoxContainer<int> box_array[2];

    std::cout << "-----------------------" << std::endl;
    
    for(size_t i{0};i<2;++i){
        box_array[i]=make_box(i+1);
    }

    std::cout << "----------------------------" << std::endl;

    for(size_t i{0};i<2;++i){
        std::cout << "box_array[" << i << "] : " << box_array[i] << std::endl;
    }
    std::cout << "----------------------------" << std::endl;

    std::cout << "End" << std::endl;
  
    return 0;
}