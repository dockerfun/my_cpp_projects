#include <iostream>
using namespace std;

template <typename T>
class A {
T_v;
public:
A() {}
A(T v): _v(v){}
T getV() { return _v; }
void add(T a) { _v+=a; }
template <class U>
U get(U a) {
return (U)(_v);
}
};

int main()
{
    A<int> a(1);
    a.add(10);
    cout.setf( ios::showpoint);
    cout << a.getV() << " " << a.get(1.0)<<endl; 
    return 0;
}