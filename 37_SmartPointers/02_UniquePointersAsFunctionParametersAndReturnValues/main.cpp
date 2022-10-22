/***
 * At any given moment there can only be one pointer managing the memory
 * Memory is automatically released when the pointer goes out of scope
*/

#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"

void do_domething_with_dog_v1(std::unique_ptr<Dog> d)
{
    d->print_dog();
}

void do_something_with_dog_v2(const std::unique_ptr<Dog>& d){
    d->set_dog_name("Brian");
    d->print_dog();
    //d.reset(); Compiler error
}

std::unique_ptr<Dog> get_unique_ptr(){
    std::unique_ptr<Dog> p_dog = std::make_unique<Dog>("Function local");
    std::cout << "unique_ptr address (in): " << &p_dog << std::endl;
    std::cout << "unique_ptr address (get 1): " << p_dog.get() << std::endl;
    
    return p_dog; //returns a reference of the local object
    /**
     * The return value may vary on the compiler itself
     * They have some freedom to make decision in this case
    */
}

int main(){
    
    /* code */
    {
        //std::unique_ptr<Dog> up_dog_1 = std::make_unique<Dog>("dog1");
        //up_dog_1->print_dog();

        /***
         * Copy detected
         * Not allowed to copy unique ptr. -> Compiler error
        */
        //do_domething_with_dog_v1(up_dog_1);

        /**
         * Ownership will be moved to the body of the function and
         * memory will be released when function returns
        */
        
        //do_domething_with_dog_v1(std::move(up_dog_1));

        //std::cout << "--------------" << std::endl;

        // Person person1("Valaki");

        // //The same behavior when a function is part of the class
        // person1.adopt_dog(std::move(up_dog_1));

        // std::cout << "Doing something , up_dog_1 points to : " << up_dog_1.get() << std::endl;

        // //An implicit move is done when object is created in place temporarly
        // do_domething_with_dog_v1(std::make_unique<Dog>("Temp dog"));

        // std::cout << "---------------" << std::endl;    

        // std::unique_ptr<Dog> up_dog_2 = std::make_unique<Dog>("Dog2");
        // do_something_with_dog_v2(up_dog_2);

        // {
        //     std::unique_ptr<Dog> up_dog_3 = get_unique_ptr();
        //     std::cout << "-------------------" << std::endl;
        //     std::cout << "unique_ptr address is : " << &up_dog_3 << std::endl;
        //     std::cout << "unique_ptr address is (get): " << up_dog_3.get() << std::endl;

        //     up_dog_3->print_dog();
        // }

        get_unique_ptr()->print_dog();
    }
    
    std::cout << "\ndone" << std::endl;
    return 0;
}