#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    /* code */
    int coll[]{1,2,4,6,8,10};

    //std::all_of, lambda function predicate -> for vectors, sets, raw arrays ...
    if(all_of(begin(coll), end(coll), [](int i){ return i%2==0; })){
        cout << "All numbers in collection are even" << endl;
    }else{
        cout << "Not all numbers in collection are even" << endl;
    }
    
    return 0;
}