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
    {
    	Dog dog1("Dog1");
    	dog1.print_dog();
    }

    {
        //Raw pointers
        Dog * p_dog2 = new Dog("Dog2");
        int * p_int1 = new int{100};
        
        p_dog2->print_dog();
        std::cout << "Integer is: " << *p_int1 << std::endl;
        std::cout << "Integer lives at address: " << p_int1 << std::endl;

        //if we go out of scope without releasing (deleting) p_dog2 
        //and p_int1 we'll have leaked memory

        delete p_dog2;
        delete p_int1;
    }

    {
        /* UNIQUE POINTERS - UNIQUE_PTR */
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
        
        std::cout << std::endl;
    }
    {
        /* MAKE_UNIQUE */
        std::cout << "make_unique example " << std::endl;
        std::unique_ptr<Dog> up_dog_7 = std::make_unique<Dog>("Dog7");
        up_dog_7->print_dog();

        std::cout << std::endl;
        std::unique_ptr<int> p_int3 = std::make_unique<int>(32);
        *p_int3 = 21;

        std::cout << "Value pointed to by p_int3 is: " << *p_int3 << std::endl;
        std::cout << "p_int pointing at address : " << p_int3.get() << std::endl;

        /* Can't copy unique pointers */
        std::unique_ptr<Dog> up_dog_8 = std::make_unique<Dog>("Milu");
        up_dog_8->print_dog();

        std::cout << "Dog8 memory address: " << up_dog_8.get() << std::endl;
        //std::unique_ptr<Dog> up_dog_9 = up_dog_8; //Error
        //std::unique_ptr<Dog> up_dog_10 {up_dog_8}; //Error
    }
    {
        /* what we can do instead of copy: MOVING OWNERSHIP */
        std::unique_ptr<Dog> up_dog_11 = std::make_unique<Dog>("Dog11");
        std::cout << "Dog11 memory address is: " << up_dog_11.get() << std::endl;
        {
            //up_dog_12 manages Dog11 and up_dog_11 points to nullptr!
            std::unique_ptr<Dog> up_dog_12 = std::move(up_dog_11);

            up_dog_12->print_dog();
            std::cout << "Dog12 memory address is: " << up_dog_12.get() << std::endl;
            std::cout << "up_dog_11 is now nullptr: " << up_dog_11.get() << std::endl;
        }
    }

    /* RESETTING */
    {
        std::unique_ptr<Dog> up_dog_13 = std::make_unique<Dog>("Dog13");
        up_dog_13.reset(); //releases memory and sets pointer to nullptr

        //Can use unique pointer in if statement to see if it points somewhere valid
        if(up_dog_13){
            std::cout << "up_dog_13 points somewhere valid : " << up_dog_13.get() << std::endl;
        }else{
            std::cout << "up_dog_13 points to null : " << up_dog_13.get() << std::endl;
        }
    }   

    return 0;
}