#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

class A {
int a;
public:
    A(int a) 
    : a(a) 
    {}
    int getA() const { 
        return a; 
    } 
    void setA(int a) { 
        this->a = a; 
    } 
    bool operator < (const A & b) const { 
        return a<b.a;
    }
};

struct Compare {
    bool operator ()(const A & a) {
        if (a.getA() < 5) 
            return true;
        return false;
    }
};
int main () {
    int t[] = {1,2,3,2,3,5,1,2,7,3,2,1,10, 4,4,5};
    set<A> d (t,t+15);
    int number = count_if(d.begin(), d.end(), Compare());
    
    cout<< number <<endl;
    
    return 0;
}