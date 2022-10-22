/***
 * At any given moment there can only be one pointer managing the memory
 * Memory is automatically released when the pointer goes out of scope
*/

#include <iostream>
#include <memory>
#include "dog.h"

int main(){
    
    /* code */
    /**
     * Array managed by unique_ptr
    */

   {
        std::cout << std::endl;
        std::cout << "Array on heap with unique_ptr" << std::endl;

        auto arr_ptr = std::unique_ptr<int[]> (new int[3]{ int(3),
                                                           int(4),
                                                           int(5)});

        for (size_t i{};i<3;++i){
            std::cout << "i: " << arr_ptr[i] << std::endl;
        }

        auto arr_dog = std::unique_ptr<Dog[]> (new Dog[3]{
            Dog("dog1"),
            Dog("dog2"),
            Dog("dog3")
        });

        for(size_t i{}; i<3; ++i){
            arr_dog[i].print_info();
        }
    }
    
    /**
     * Cannot initialize individual elements
    */

    auto arr_ptr = std::make_unique<Dog[]>(3);

    for(size_t i{}; i<3; ++i){
        arr_ptr[i].print_info();
    }

    //std::unique_ptr<Dog> p_dog = std::make_unique<Dog>("fluffy");

    std::cout << "\ndone" << std::endl;
    return 0;
}