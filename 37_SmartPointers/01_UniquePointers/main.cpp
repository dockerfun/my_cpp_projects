/***
 * At any given moment there can only be one pointer managing the memory
 * Memory is automatically released when the pointer goes out of scope
*/

#include <iostream>
#include <memory>
#include "dog.h"

int main(){
    
    /* code */
    //Stack variables
    //Dog dog1("Dog1");
    //dog1.print_dog();

    //Raw pointers
    /*Dog * p_dog2 = new Dog("Dog2");
    int * p_int1 = new int{100};
    
    p_dog2->print_dog();
    std::cout << "Integer is: " << *p_int1 << std::endl;
    std::cout << "Integer lives at address: " << p_int1 << std::endl;*/

    //if we go out of scope without releasing (deleting) p_dog2 
    //and p_int1 we'll have leaked memory

    //delete p_dog2;
    //delete p_int1;

    /* UNIQUE POINTERS */
    Dog * p_dog_3 = new Dog("Dog3");
    /**
     * Can also manage a previously allocated space managed by a raw pointer
     * Raw pointer should not be used from this point on!
    */
    std::unique_ptr<Dog> up_dog_4{p_dog_3}; 

    //usage - others
    std::unique_ptr<Dog> up_dog_5 {new Dog("Dog5")};
    std::unique_ptr<int> up_int2{new int{230}};

    /**
     * Can also be initiated with nullptr and give it memory to manage
     * later, we'll see how to do that with std::move later
    */
    std::unique_ptr<Dog> up_dog_6{nullptr};

    up_dog_5->print_dog(); //calling function with -> operator

    //assign a fundamental type
    *up_int2 = 540;

    std::cout << "Integer is: " << *up_int2 << std::endl;
    std::cout << "Integer live at address: " << up_int2.get() << std::endl;
    
    
    return 0;
}