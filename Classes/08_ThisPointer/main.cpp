#include <iostream>
#include "dog.h"

using namespace std;

int main(){

    Dog * p_dog = new Dog("d1", "Shepherd", 3);
    p_dog->print_info()->set_name("Fluffy")->set_dog_age(1)->set_dog_breed("IDK")->print_info();

    p_dog->set_dog_age2(3).set_dog_breed2("IDK");
    
    delete p_dog;

    cout << "Done!" << endl;
    return 0;
}