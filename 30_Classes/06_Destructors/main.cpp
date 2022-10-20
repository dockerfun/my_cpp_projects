#include <iostream>
#include "dog.h"

using namespace std;

// void some_func(Dog dog_param){
    //do not pass value parameter ->delete pointer will be called twice
// }

void some_func(){
    Dog *p_dog = new Dog("Valaki", "Shepherd", 5);
    //to solve memory leak issue
    delete p_dog;
}

int main(){

    //Dog * dog = new Dog();
    //Dog dog2("Fluffy", "Shepherd", 2);
    //Dog dog("Fluffyka", "Shepherd", 3);
    //some_func(dog);
    some_func();
    cout << "Done!" << endl;
    return 0;
}