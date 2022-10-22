#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

class Dog {
public:
    Dog()=default;
    Dog(const std::string& name)
        : m_name(name){}
    ~Dog(){
        std::cout << "Memory of '" << m_name << "' released " << std::endl;
    };
    void print_dog() const{
        std::cout << "name: " << m_name << std::endl;
    }
    void set_dog_name(const std::string & name){
        m_name = name;
    }
    std::string get_name() const {
        return m_name;
    }

private:
    std::string m_name{};
};

#endif //DOG_H