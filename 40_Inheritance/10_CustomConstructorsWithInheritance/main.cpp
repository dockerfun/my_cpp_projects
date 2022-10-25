#include <iostream>
#include <string_view>
using namespace std;

class A{
    public:
        A()=default;
        A(std::string_view fullname, int age, std::string_view address)
            :m_fullname(fullname), m_age(age), m_address(address)
        {
            std::cout << "Constructor of class A called" << std::endl;
        }
    protected:
        std::string_view m_fullname;
        int m_age;
        std::string_view m_address;
};

class B : protected A{
    public:
        B()=default;
        B(std::string_view fullname, int age, std::string_view address, int contract_count)
            :A(fullname, age, address), m_contract_count(contract_count)
        {
            std::cout << "Constructor of class B called" << std::endl;
        }
        std::string_view get_fullname(){
            return m_fullname;
        }
    protected:
        int m_contract_count;
};

class C : private B{
    friend std::ostream& operator<<(std::ostream& out, const C& c);
    public:
        C(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality)
            :B(fullname, age, address, contract_count), m_speciality(speciality){
            std::cout << "Constructor of class C called" << std::endl;
        }

    private:
        std::string_view m_speciality;
};

inline std::ostream& operator<<(std::ostream& out, const C& c){
    out << "C [ fullname: " << c.m_fullname << ", age: " << c.m_age << ", address: " << c.m_address << ", contract count: " << c.m_contract_count << ", speciality: " <<
    c.m_speciality << " ]";
    return out;
}

int main(){
    
    /* code */
    C c("Georg Clooney", 63, "23422 Washington, USA", 21, "idk");
    std::cout << c << std::endl;
    return 0;
}