#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

class A {
    int a;
public:
    A(int a) : a(a) {}
    int getA() const { 
        return a; 
    }
    void setA(int a) { 
        this->a = a; 
    }
};

int main () {
    int t[] = {1,2,3,2,3,5,1,2,7,3,2,1,10,4,4,5};

    deque<int> d (t,t+15);
    int number = count(d.begin(), d.end(), 4); // 2

    cout<< number<<endl;
    return 0;
}