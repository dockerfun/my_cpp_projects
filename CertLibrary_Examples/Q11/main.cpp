#include <iostream>
using namespace std;

class A {
public :
    void print() {
        cout << "A ";
    }
};

class B {
public :
    void print() {
        cout << "B ";
    }
};

int main() {
    B sc[2];
    A *bc = (A*)sc;

    for (int i=0; i<2;i++)
        (bc++)->print();
    
    return 0;
}