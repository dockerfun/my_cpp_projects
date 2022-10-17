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
    Dog * set_name(const std::string& dog_name){
        this->name = dog_name;
        return this;
    }
    Dog* set_dog_breed(const std::string& breed){
        this->breed = breed;
        return this;
    }
    Dog* set_dog_age(int age){
        if(this->p_age){
            *(this->p_age)=age;
        }
        return this;
    }

    Dog& set_dog_breed2(const std::string& breed){
        this->breed = breed;
        return *this;
    }
    Dog& set_dog_age2(int age){
        if(this->p_age){
            *(this->p_age)=age;
        }
        return *this;
    }
    
    Dog * print_info(){
        cout << "name: " << this->name << ", breed: " << this->breed << ", age:" << *(this->p_age) << endl;
        return this;
    };

private:
    std::string name;
    std::string breed;
    int * p_age{nullptr};
};

#endif