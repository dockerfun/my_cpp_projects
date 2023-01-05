#include <iostream>
#include <string>
using namespace std;

class A {
    int x;
protected:
    int y;
public:
    int z;
    A() { x=1; y=2; z=3; }
};

class B : public A {
    string z;
public:
    void set() {
        y = 4;
        z = "John";
    }

    void Print() {
        cout << y << z;
    }
};

class C : public B {
public:
    void set(){
        y=2;
    };
};

int main () {
    B b;
    b.set();
    b.Print();
    return 0;
}