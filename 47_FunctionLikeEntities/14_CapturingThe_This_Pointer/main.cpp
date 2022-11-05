#include <iostream>
using namespace std;

class Item{
public:
    Item(int a, int b)
        : m_var1(a), m_var2(b){}
    void some_member_func(){
        auto func = [this](){
            std::cout << "member vars: " << m_var1 << ", " << m_var2 << std::endl;
        };
        auto func2 = [=](){ //Implicit capture of 'this' is deprecated in C++20
            std::cout << "member vars: " << m_var1 << ", " << m_var2 << std::endl;
        };
        func();
        func2();
    }

private:
    int m_var1;
    int m_var2;
};

int main(){
    
    /* code */
    Item item(2,4);
    item.some_member_func();
    
    return 0;
}