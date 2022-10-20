#include <iostream>
using namespace std;
#include "dog.h"

int main(){
    
    /* code */
    // Dog dog1("Rex", "German shepherd", 3);
    // dog1.print_info(); 
    // dog1.set_name("Valaki");
    // dog1.print_info();

    /* declaring a const dog object */
    const Dog dog2("Fluffy", "Shephard", 4);
    //Direct access
    //dog2.set_name("Quark");
    //dog2.print_info();
    //Pointer to non const
    //Dog * p_dog1 = &dog2; //compiler error

    //Dog& p_dog2 = dog2; //Compiler error

    //Pointer to const
    // const Dog * p_dog3 = &dog2;

    // p_dog3-get_name(); // Error

    //Const reference
    const Dog& dog_ref = dog2;
    //dog_ref.get_name();

    cout << "done" << endl;

    return 0;
}