#ifndef CRITICALERROR_H
#define CRITICALERROR_H

#include "smallerror.h"
#include <iostream>
#include <string>

class CriticalError : public SmallError{
    public:
        CriticalError(const std::string& s) : SmallError(s){}
        ~CriticalError(){
            std::cout << "Destructor of CriticalError called" << std::endl;
        }
        const std::string what()const{return m_message+" Red"; }
};

#endif // CRITICALERROR_H