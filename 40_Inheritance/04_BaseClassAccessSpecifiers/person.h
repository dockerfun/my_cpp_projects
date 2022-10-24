#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <string_view>

class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
public:
    Person()=default;
    Person(std::string& first_name_param, std::string& last_name_param);
    ~Person();

    //Getters
    std::string get_first_name() const {
        return first_name;
    }
    std::string get_last_name() const{
        return last_name;
    }
    //Setters
    void set_first_name(std::string_view first_name_param) {
        first_name=first_name_param;
    }
    void set_last_name(std::string_view last_name_param) {
        last_name=last_name_param;
    }
private:
    int private_int{3};
protected:
    std::string last_name{"Mysterious"};
    std::string first_name{"Person"};
public:
    std::string m_full_name;
    int m_age{};
};

#endif //PERSON_H