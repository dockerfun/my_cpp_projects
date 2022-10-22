#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog {
public:
    Dog()=default;
    Dog(const std::string & name_param)
        : m_name(name_param){}
    void print_info() const {
        std::cout << "Dog name: " << m_name << std::endl;
    }
private:
    std::string m_name;
};

#endif //DOG_H