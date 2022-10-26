#ifndef WARNING_H
#define WARNING_H

#include "somethingiswrong.h"
#include <string>
#include <iostream>

class Warning : public SomethingIsWrong{
    public:
        Warning(const std::string& s):SomethingIsWrong(s){}
        ~Warning(){
            std::cout << "Destructor of Warning called" << std::endl;
        }
        const std::string what()const{return m_message + " Yellow"; }
};

 #endif //WARNING_H