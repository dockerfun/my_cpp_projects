#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
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
    operator int() const {
        return a;
    }
};

int main () {
    int t[] = {1,2,3,2,3,5,1,2,7,3,2,1,10, 4,4,5};
    set<A> s (t,t+15); // 1,2,3,4,5,7,10
    
    // set<A>::iterator itr;
    // for(itr=s.begin();itr!=s.end();itr++)
    //     cout << *itr << " ";

    cout << endl;
    cout << equal(s.begin(), s.end(), t) << endl; // 0
    
    return 0;   
}