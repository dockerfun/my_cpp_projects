/**
 * Namespaces - Nested namespaces
 * 
 * A facility in the C++ programming language to avoid name conflicts
*/
#include <iostream>

namespace Hello { 
    unsigned int age{23};
    
    namespace World {
        int local_var{44};

        void say_something(){
            std::cout << "Hello There.." << std::endl;
            std::cout << "The age is: " << age << std::endl; 
        }
    }

    void do_something(){
        std::cout << "Using local_var: " << World::local_var << std::endl;
    }
}

int main(){

    Hello::do_something();
    Hello::World::say_something();

    return 0;
}