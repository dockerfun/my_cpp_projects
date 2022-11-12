#include <iostream>
#include <string>

using namespace std;

template <class T>
class A {
    T _v;
public:
    A() {}
    A(T v): _v(v){}
    T getV() { return _v; }
    void add(T & a) { _v+=a; }
    // void add(string & a) { //Compilation error if both add methods are present
    //     _v.insert(0, a);
    // }
};

int main()
{
    A<string>a("Hello");
    string s(" world!");
    
    a.add(s);
    
    cout << a.getV() <<endl;
    
    return 0;
}