#include <iostream>
using namespace std;

class Person {
public:
    int m_1{1};
protected:
    int m_2{2};
private:
    int m_3{3};
};

class Engineer : private Person {
public:
    void set_m(){
        m_1 = 4;
        m_2 = 7;
    }
};

class CivilEng : public Engineer {
    friend std::ostream& operator<<(std::ostream& out, const CivilEng& civileng);

    void set_m(){
        m_1 = 4;
        m_2 = 7;
    }
};

std::ostream& operator<<(std::ostream& out, const CivilEng& civileng)
{
    out << "CivilEng: [m_1: " << civileng.m_1 << ", m_2: " << civileng.m_2 << "]";
    return out;
}

int main(){
    
    /* code */
    CivilEng ce;
    std::cout << ce << std::endl;

    ce.m_1 = 4;
    ce.m_2 = 7;
    std::cout << ce << std::endl;

    return 0;
}