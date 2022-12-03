#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(){
    int t[] ={ 3, 4, 2, 1, 0, 1, 2, 3, 4, 0 };
    vector<int> v(t, t+10);
    multimap<int,string> m;

    for(vector<int>::iterator i=v.begin(); i!=v.end(); i++) {
        stringstream s; 
        s << *i << *i; 
        m.insert(pair<int,string>(*i,s.str()));
    }

    for(multimap<int, string>::iterator i=m.begin();i!= m.end(); i++) { 
        cout << *i << " ";
    }
    return 0;
}