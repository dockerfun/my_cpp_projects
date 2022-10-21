#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

class Dog {
public:
    Dog()=default;
    Dog(const std::string& name)
        : m_name(name){}
    ~Dog(){};
    void print_dog() const{
        std::cout << "name: " << m_name << std::endl;
    }
private:
    std::string m_name{};
};

#endif //DOG_H