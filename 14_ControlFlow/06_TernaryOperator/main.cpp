#include <iostream>
using namespace std;

int main(){
    
    /* code */
    int max{};

    int a{35};
    int b{20};

    cout << "using regular if" << endl;

    if(a>b){
        max = a;
    }else{
        max=b;
    }

    cout << "max: " << max << endl;

    cout << "max:" << ((a>b)?a:b) << endl;
    

    return 0;
}