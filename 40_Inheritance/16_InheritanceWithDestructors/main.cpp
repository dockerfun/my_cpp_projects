#include <iostream>
#include <string_view>
using namespace std;

class A{
    public:
        A(std::string_view fullname, int age, std::string_view address) : m_fullname(fullname), m_age(age), m_address(address){
            std::cout << "Constructor of class A called" << std::endl;
        }
        A(const A& source)
            :m_fullname(source.m_fullname), 
             m_age(source.m_age), 
             m_address(source.m_address)
        {
            std::cout << "Copy constructor of class A called" << std::endl;
        }
        ~A(){
            std::cout << "Destructor for A called." << std::endl;
        }
    //Member variables
    public:
        std::string_view m_fullname;
    protected:
        int m_age;
    private:
        std::string_view m_address;
};

class B : private A{
    public:
        B(std::string_view fullname, int age, std::string_view address, int contract_count) 
        : A(fullname, age, address), m_contract_count(contract_count)
        {
            std::cout << "Constructor of class B called" << std::endl;
        }
        B(const B& b) : A(b), m_contract_count(b.m_contract_count){ // Copy constructor
            std::cout << "Copy constructor of class B called" << std::endl;
        }
        ~B(){
            std::cout << "Destructor for B called." << std::endl;
        }
    //Member variables
    protected:
        int m_contract_count;
};

class C : public B{
    using B::B;
    public:
        // // Custom cunstructor
        C(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality)
            :B(fullname, age, address, contract_count), m_speciality(speciality){
            std::cout << "Custom constructor of class C called" << std::endl;
        }
        ~C(){
            std::cout << "Destructor for C called." << std::endl;
        }
    private:
        std::string_view m_speciality;
};

int main(){
    
    /* code */
    C c1("Georg Clooney", 63, "23422 Washington, USA", 21, "idk"); //Inherited from base class
    std::cout << "---------------------" << std::endl;

    return 0;
}