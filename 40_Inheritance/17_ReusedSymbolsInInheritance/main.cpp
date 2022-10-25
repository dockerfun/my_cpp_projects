#include <iostream>
#include <string_view>
using namespace std;

class Person{
public:
    void print(){
        cout << "print from parent: " << m_age << endl;
    }
private:
    int m_age{44};
};

class Child : public Person{
public:
    Child(int age):m_age(age){}
    ~Child(){}
    void print(){
        cout << "print from child: " << m_age << endl;
    }
private:
    int m_age{23};
};

int main(){
    
    /* code */
    Child child(13);
    child.print(); // Calls print method from Child
    child.Person::print(); // Calls the method in parent class

    return 0;
}