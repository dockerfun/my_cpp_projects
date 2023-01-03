#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
struct Out {
    ostream & out;
    Out(ostream & o): out(o){}
    void operator()(const T & val ) {
    out<<val<<" "; }
};

struct Sequence {
    int start;
    Sequence(int start):start(start){}
    int operator()() {
        return start++; 
    } 
};

int main() {
    vector<int> v1(10);
    vector<int> v2(10);

    generate(v1.begin(), v1.end(), Sequence(1));
    for (auto &data : v1)
    {
        /* code */
        cout << data << " ";
    }
    
    cout << endl;

    reverse_copy(v1.begin(),v1.end(), v2.rbegin());

    cout << *(v2.rbegin()) << endl;

    for (auto &data : v2)
    {
        /* code */
        cout << data << " ";
    }
    
    cout << endl;

    sort(v2.begin(), v2.end(), less_equal<int>());
    for_each(v2.begin(), v2.end(), Out<int>(cout) ); 
    
    cout<<endl; 
    return 0;
}