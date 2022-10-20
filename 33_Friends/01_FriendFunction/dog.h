#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog {
    string dog_name;
    int dog_age;
public:
    Dog()=default;
    Dog(string dog_name, int dog_age){
        this->dog_name = dog_name;
        this->dog_age = dog_age;
    }
    friend void debug_dog_info(const Dog & dog);
    friend void debug_dog_info();
};

#endif