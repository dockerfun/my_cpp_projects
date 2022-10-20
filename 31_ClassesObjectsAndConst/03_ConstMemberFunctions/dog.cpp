#include "dog.h"
#include <string>
#include <iostream>
#include <string_view>

using namespace std;

Dog::Dog(string_view name_param, string_view breed_param, unsigned int age_param){
    m_name=name_param;
    m_breed=breed_param;
    m_age=age_param;
}

Dog::~Dog(){
}

//Setters
void Dog::set_name(string_view m_name){
    this->m_name = m_name;
}
void Dog::set_breed(string_view m_breed){
    this->m_breed=m_breed;
}
void Dog::set_dog_age(unsigned int age){
    m_age=age;
}

//Getters
string_view Dog::get_name() const {
    return m_name;
}
string_view Dog::get_breed() const{
    return this->m_breed;
}
int Dog::get_age() const{
    return this->m_age;
}
void Dog::print_info() const {
    cout << "name: " << this->m_name 
         << ", breed: " << this->m_breed 
         << ", age: " << this->m_age << endl;
}