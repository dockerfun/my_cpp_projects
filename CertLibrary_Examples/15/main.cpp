#include <iostream>
using namespace std;

class Base {
    static int age;
    public:
    Base () {};
    ~Base () {};

    void setAge(int a=10) {age = a;}
    void Print() { cout << age;}
};

int Base::age=0;

int main () {
    Base a,*b;
    b = new Base();
    a.setAge();
    b->setAge(20);
    a.Print();
    b->Print();
    return 0;
}
