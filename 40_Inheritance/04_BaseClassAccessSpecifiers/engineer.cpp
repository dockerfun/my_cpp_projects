#include "engineer.h"

Engineer::Engineer(){}
Engineer::~Engineer(){
}

std::ostream& operator<<(std::ostream& out, const Engineer& engineer){
    out << "Engineer [Full name: " << engineer.get_first_name() << " " << engineer.get_last_name() << "]";
    return out;
}