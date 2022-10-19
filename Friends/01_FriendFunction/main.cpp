/**
 * Giving access to our own member variables to external entities. 
 * 
 * External entities can either be functions or classes.
*/

#include <iostream>
#include "dog.h"
using namespace std;

void debug_dog_info(const Dog & dog){
    cout << "Dog name: " << dog.dog_name << ", dog age: " << dog.dog_age << endl;
}

void debug_dog_info(){
    Dog internal_dog("Pinch", 4);
    cout << "Dog name: " << internal_dog.dog_name << ", dog age: " << internal_dog.dog_age << endl;
}

int main(){
    
    /*
     * Friend functions
     */
    const Dog dog("Fluffy", 3);

    debug_dog_info(dog);
    
    return 0;
}