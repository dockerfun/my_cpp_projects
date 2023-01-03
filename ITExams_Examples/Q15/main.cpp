#include <iostream>
#include <string>

using namespace std;

class A {
public:
    string s;
    A(string s) { this->s = s; }
};

class B {
public:
    string s;   
    B (A a) { 
        cout<< "B (A a) called." << endl;
        this->s = a.s; 
    }
    B (int n) { 
        cout<< "B (int n) called." << endl;
    }
    void print() { cout<<s; }
};

int main()
{
    A a("Hello world");
    B b=a;
    b.print();
}