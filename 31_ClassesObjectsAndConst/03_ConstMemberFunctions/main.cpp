#include <iostream>
using namespace std;
#include "dog.h"

void function_taking_dog(Dog dog){
    dog.set_name("Milu"); //It's a copy of the const object
    dog.print_info();
    cout << "Address of the copy of dog2 object: " << &dog << endl;
}
void function_taking_dog_ref(Dog& dog_ref){
    //dog_ref.set_name("Milu");
    //dog_ref.print_info();
}
void function_taking_const_dog_ref(const Dog& const_dog_ref){
    //const_dog_ref.set_name("Milu"); //Any modification is prevented
    const_dog_ref.print_info();
    cout << "Address inside function: " << &const_dog_ref << endl;
}
void function_taking_pointer_to_dog(Dog* const_p_dog){
    //Compiler won't allow passing const Dog object as argument
}
void function_taking_pointer_to_const_dog(const Dog* const_p_dog){
    //const_p_dog->set_name("Milu"); //Error: expected
    const_p_dog->print_info();     //Error: Not expected
    //cout << "name: "<< const_p_dog->get_name() << ", breed: " << const_p_dog->get_breed() << ", age: "<< const_p_dog->get_age() << endl;

}

int main(){
    
    /* code */
    /* declaring a const dog object */
    const Dog dog2("Fluffy", "Shephard", 4);
    cout << "Address of dog2 object: " << &dog2 << endl;

    //Pass by value
    //function_taking_dog(dog2); //passed

    //Pass by (non const) reference
    //function_taking_dog_ref(dog2);//error

    //Pass by const reference
    function_taking_const_dog_ref(dog2);//error

    //Pass by pointer (to non const)
    //function_taking_pointer_to_dog(&dog2);

    //Pass by pointer to const
    function_taking_pointer_to_const_dog(&dog2);

    cout << "done" << endl;

    return 0;
}