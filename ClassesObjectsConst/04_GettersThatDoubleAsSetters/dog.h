#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog{
public:
    Dog()=default;
    Dog(const string& name_param, const string& breed_param, unsigned int age_param);
    ~Dog();
    string& name();
    const string& name() const;
    string& breed();
    const string& breed() const;
    unsigned int& age();
    const unsigned int& age() const;
    void print_info() const;
private:
    string m_name;
    string m_breed;
    unsigned int m_age;
};

#endif