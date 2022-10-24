#include <iostream>
using namespace std;

class A{
    public:
        A(){
            std::cout << "A" << std::endl;
        }
        A(int a){
            ++a;
            std::cout << "a:" << a << std::endl;
        }

};

class B : protected A{
    public:
        B():A(2){
            std::cout << "B" << std::endl;
        }

        B(int b):B(){
            std::cout << "b:" << b << std::endl;
        }
};

class C : private B{
    public:
        C(int c):B(c){
            std::cout << "C" << std::endl;
        }

};

int main(){
    
    /* code */
    C c(1);
    
    return 0;
}