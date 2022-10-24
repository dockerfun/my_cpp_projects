#ifndef NURSE_H
#define NURSE_H

#include <string>
#include "person.h"

class Nurse : protected Person {
    friend std::ostream& operator<<(std::ostream& out, const Nurse& nurse);
public:
    Nurse();
    ~Nurse();

    void treat_unwell_person(){
       m_full_name = "John Doe";
       m_age = 23;
    
    }
private:
    int practice_certificate_id{0};
};

#endif //NURSE_H