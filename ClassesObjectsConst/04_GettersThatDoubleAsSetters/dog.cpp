#include "dog.h"
#include <string>
#include <iostream>

using namespace std;

Dog::Dog(const string& name_param, const string& breed_param, unsigned int age_param){
    m_name=name_param;
    m_breed=breed_param;
    m_age=age_param;
}

Dog::~Dog(){
}
//Getters that works as setters
string& Dog::name() {
    return m_name;
}
const string& Dog::name() const {
    return m_name;
}
string& Dog::breed() {
    return m_breed;
}
const string& Dog::breed() const {
    return m_breed;
}
unsigned int& Dog::age() {
    return m_age;
}
const unsigned int& Dog::age() const {
    return m_age;
}
void Dog::print_info() const {
    cout << "name: " << this->m_name 
         << ", breed: " << this->m_breed 
         << ", age: " << this->m_age << endl;
}