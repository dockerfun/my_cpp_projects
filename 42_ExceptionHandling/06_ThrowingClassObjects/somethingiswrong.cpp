#include "somethingiswrong.h"
#include <iostream>

SomethingIsWrong::~SomethingIsWrong(){
    std::cout << "Destructor of SomethingIsWrong called" << std::endl;
}

std::string_view SomethingIsWrong::what() const{
    return m_message;
}