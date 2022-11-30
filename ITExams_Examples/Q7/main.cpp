#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
struct Out {
    ostream & out;
    Out(ostream & o): out(o){}
    void operator()(const T & val ) {
        out<<val<<" ";
    }
};

struct Sequence {
    int start;
    Sequence(int start):start(start){}
    int operator()() { 
        return 10*(1+(start++ %3)); 
    } 
};

int main() {
    vector<int> v1(10);
    vector<int> v2(10);

    generate(v1.begin(), v1.end(), Sequence(1)); // 20, 30, 10, 20, 30, 10, 20, 30, 10, 20
    sort(v1.rbegin(), v1.rend()); // 30, 30, 30, 20, 20, 20, 20, 10, 10, 10
    unique_copy(v1.begin(),v1.end(), v2.begin()); //30, 20, 10, 0, 0, 0, 0, 0, 0, 0

    for_each(v2.begin(), v2.end(), Out<int>(cout) ); 
    cout<<endl; 
    return 0;
}