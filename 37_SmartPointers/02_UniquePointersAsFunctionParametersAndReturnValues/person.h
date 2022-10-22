#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include "dog.h"

class Person {
public:
    Person(const std::string& name)
        : m_name(name){}
    void adopt_dog(std::unique_ptr<Dog> dog){
        m_dog = std::move(dog);
        std::cout << "Adopted dog's address is : " << m_dog.get() << std::endl;
    }
private:
    std::string m_name;
    std::unique_ptr<Dog> m_dog;
};

#endif //PERSON_H