#include <iostream>
using namespace std;

class A {
public:
    void Print(){ cout << "A"; }
};

class B : public A {
public:
    virtual void Print(){ cout << "B"; }
};

class C : public B {
public:
    void Print(){ cout << "C"; }
};

int main()
{
    A ob1;
    B ob2;
    C ob3;
    
    A *obj;

    obj = &ob1;
    obj->Print();
    
    obj = &ob2;
    obj->Print();
    
    obj = &ob3;
    obj->Print();
}