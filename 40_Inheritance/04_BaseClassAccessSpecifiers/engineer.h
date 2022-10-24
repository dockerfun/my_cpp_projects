#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

class Engineer : private Person {
    friend std::ostream& operator<<(std::ostream& out, const Engineer& engineer);
public:
    Engineer();
    ~Engineer();
private:

};

#endif //ENGINEER_H