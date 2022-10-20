#ifndef DOG_H
#define DOG_H

#include <string>
#include <string_view>
using namespace std;

class Dog{
public:
    Dog()=default;
    Dog(string_view name_param, string_view breed_param, unsigned int age_param);
    ~Dog();
    void set_name(string_view dog_name);
    void set_breed(string_view dog_breed);
    void set_dog_age(unsigned int age);
    string_view get_name() const;
    string_view get_breed() const;
    int get_age() const;
    void print_info() const;
private:
    string_view m_name;
    string_view m_breed;
    unsigned int m_age;
};

#endif