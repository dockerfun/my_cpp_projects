#include <iostream>
#include <string>
using namespace std;

class A {
public:
int x;
A() { x=0;}
};

class B {
public:
int x;
B() { x=1;}
};

class C :public A, public B {
public:
    int x;
    C(int x) {
        this->x = x;
        x = x + 1; 
    } 
    void Print() { 
        cout << x << A::x << B::x; 
    } 
}; 

int main () { 
    C c2(1); 
    c2.Print(); 
    return 0; 
}