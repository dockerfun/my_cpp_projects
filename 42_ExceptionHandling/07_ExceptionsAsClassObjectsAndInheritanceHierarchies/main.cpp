#include <iostream>
using namespace std;
#include "criticalerror.h"
#include "smallerror.h"

void do_something(size_t i){
    if(i==2){
        throw CriticalError("i is 2");
    }
    if(i==3){
        throw SmallError("i is 3");
    }
    if(i==4){
        throw Warning("i is 4");
    }
    if(i==5){
        throw SomethingIsWrong("i is 5");
    }
    cout << "Doing something at iteration: " << i << endl;
}

int main(){
    
    /* code */
    for(size_t i{0};i<6;++i){
        try{
            do_something(i);
        }catch(CriticalError& ex){
            cout << "Exception(CriticalError) cought: " << ex.what() << endl;
        }catch(SmallError& ex){
            cout << "Exception(SmallError) cought: " << ex.what() << endl;
        }catch(Warning& ex){
            cout << "Exception(Warning) cought: " << ex.what() << endl;
        }catch(SomethingIsWrong& ex){
            cout << "Exception(SomethingIsWrong) cought: " << ex.what() << endl;
        }
    }
    cout << "End. " << endl;
    
    return 0;
}
