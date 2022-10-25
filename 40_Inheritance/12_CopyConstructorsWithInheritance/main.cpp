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
    protected:
        std::string_view m_fullname;
        int m_age;
        std::string_view m_address;
};

class B : private A{
    public:
        B(std::string_view fullname, int age, std::string_view address, int contract_count) 
        : A(fullname, age, address), m_contract_count(contract_count)
        {
            std::cout << "Constructor of class B called" << std::endl;
        }
        B(const B& b) : A(b), m_contract_count(b.m_contract_count){
            std::cout << "Copy constructor of class B called" << std::endl;
        }
    protected:
        int m_contract_count;
};

class C : public B{
    //friend std::ostream& operator<<(std::ostream& out, const C& c);
    public:
        C(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality)
            :B(fullname, age, address, contract_count), m_speciality(speciality){
            std::cout << "Constructor of class C called" << std::endl;
        }
        C(const C& c)
            :B(c), m_speciality(c.m_speciality){
            std::cout << "Copy constructor of class C called" << std::endl;
        }
    private:
        std::string_view m_speciality;
};

// inline std::ostream& operator<<(std::ostream& out, const C& c){
//     out << "C [ fullname: " << c.m_fullname << ", age: " << c.m_age << ", address: " << c.m_address << ", contract count: " << c.m_contract_count << ", speciality: " <<
//     c.m_speciality << " ]";
//     return out;
// }

int main(){
    
    /* code */
    C c1("Georg Clooney", 63, "23422 Washington, USA", 21, "idk");
    std::cout << "---------------------" << std::endl;
    C c2(c1);

    // std::cout << c1 << std::endl;
    // std::cout << c2 << std::endl;
    
    // B b1("Georg Clooney", 63, "23422 Washington, USA", 21);
    // B b2(b1);

    return 0;
}