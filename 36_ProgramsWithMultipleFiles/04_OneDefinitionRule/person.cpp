#include "person.h"

Person::Person(const std::string& name_param, int age_param)
    :full_name(name_param), age(age_param){
        ++person_count;
    }