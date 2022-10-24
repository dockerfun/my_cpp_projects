#include "nurse.h"
#include "person.h"
#include <iostream>

Nurse::Nurse(){}
Nurse::~Nurse(){}

std::ostream& operator<<(std::ostream& out, const Nurse& nurse){
    out << "Nurse [ id: " << nurse.get_first_name() << "]";
    return out;
}
