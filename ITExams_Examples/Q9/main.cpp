#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class B { 
    int val;
public:
    B(int v):val(v){}
    int getV() const {
        return val;
    }
    /* Insert Code Here */
    bool operator > (const B & v) const { 
        return val>v.val;
    }
};

ostream & operator << (ostream & out, const B & v) { 
    out<<v.getV(); 
    return out;
} 

template<class T>
struct Out { 
    ostream & out;
    Out(ostream & o): out(o){}
    void operator() (const T & val ) { 
        out<<val<<" "; 
    } 
}; 

int main() { 
    int t[] = { 8, 10, 5, 1, 4, 6, 2, 7, 9, 3}; 
    vector<B> v1(t, t+10); 

    sort(v1.begin(), v1.end(), greater<B>()); 
    for_each(v1.begin(), v1.end(), Out<B>(cout));

    cout<<endl; 
    return 0;
}