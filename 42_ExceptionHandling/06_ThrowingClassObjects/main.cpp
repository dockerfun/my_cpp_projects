#include <iostream>
using namespace std;
#include "somethingiswrong.h"

void do_something(size_t i){
    if(i==2){
        throw SomethingIsWrong("i is 2");
    }
    cout << "Doing something at iteration: " << i << endl;
}

int main(){
    
    /* code */
    for(size_t i{0};i<5;++i){
        try{
            do_something(i);
        }catch(SomethingIsWrong& ex){
            cout << "Exception cought: " << ex.what() << endl;
        }
    }
    cout << "End. " << endl;
    
    return 0;
}
