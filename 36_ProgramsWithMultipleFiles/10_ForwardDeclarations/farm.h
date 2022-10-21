#ifndef FARM_H
#define FARM_H

#include "dog.h" //waste of time considering the compilation time

//class Dog; //Forward declaration

class Farm {
public:
    Farm();
    ~Farm();
    //member function
    //void use_dog(const Dog& dog_param); //does not require the definition

    //Definition of Dog needed: Forward declaration will not work
    void use_dog(const Dog& dog_param){
        dog_param.print_info();
    }
private:
    Dog guard; //Definition of Dog needed: Forward declaration won't work
};

#endif //FARM_H