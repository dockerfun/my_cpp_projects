#include <iostream>
using namespace std;

constexpr bool condition{false};

int main(){
    
    /* code */
    if constexpr(condition){
        cout << "Condition is true" << endl;
    }else{
        cout << "Condition is not true" << endl;
    }
    return 0;
}

