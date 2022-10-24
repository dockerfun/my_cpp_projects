#include <iostream>
using namespace std;

class Person {
    public:
        Person(){
            m_1++;
            std::cout << "Person's constructor called." << std::endl;
        }
        int m_1{0};
    public:
        bool print(){
            std::cout << "Person (m_1) : " << m_1 << std::endl;
            return true;
        }
};

class Engineer : protected Person{
    public:
        Engineer(){
            m_1++;
            std::cout << "Engineer's constructor called." << std::endl;
        }
        bool print2(){
            std::cout << "Engineer (m_1) : " << m_1 << std::endl;
            Person::print();
            return true;
        }
        using Person::m_1;
        using Person::print;
};

class CivilEng : public Engineer{
    public:
        CivilEng(){
            m_1++;
            std::cout << "CivilEng's constructor called." << std::endl;
        }
        bool printCivilEng(){
            std::cout << "CivilEng (m_1) : " << m_1 << std::endl;
            print();
            Person::print();
            return true;
        }
};

int main(){
    
    /* code */
    CivilEng e;

    //e.m_1 = 4; In the Engineer class -> change protected access modifier to public and this statement will work

    e.printCivilEng();
    

    return 0;
}