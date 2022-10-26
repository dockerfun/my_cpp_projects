#include "somethingiswrong.h"
#include <iostream>

SomethingIsWrong::~SomethingIsWrong(){
    std::cout << "Destructor of SomethingIsWrong called" << std::endl;
}

const std::string SomethingIsWrong::what() const{
    return m_message;
}