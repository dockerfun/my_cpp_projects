#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string_view>
using namespace std;

class Dog{
public:
    Dog()=default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();//Destructor

private:
    std::string name;
    std::string breed;
    int * p_age{nullptr};
};

#endif