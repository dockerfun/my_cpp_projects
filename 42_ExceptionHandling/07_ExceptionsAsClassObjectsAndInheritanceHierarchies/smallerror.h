 #ifndef SMALLERROR_H
 #define SMALLERROR_H

#include "warning.h"
#include <iostream>

class SmallError : public Warning{
    public:
        SmallError(const std::string& s) : Warning(s){}
        ~SmallError(){
            std::cout << "Destructor of SmallError called" << std::endl;
        }
        const std::string what()const{return m_message + " Orange"; }
};

 #endif //SMALLERROR_H