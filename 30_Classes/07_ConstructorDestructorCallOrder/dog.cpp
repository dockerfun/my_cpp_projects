#include "dog.h"
#include <iostream>
#include <string_view>

using namespace std;

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for " << name << std::endl;
}


Dog:: Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;

    cout << "Dog constructor called!" << endl;
}