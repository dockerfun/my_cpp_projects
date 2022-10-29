#include <iostream>
using namespace std;

int global_var{45};

int main(){
    
    /* code */
    bool green{false};

    if(green){
        int car_count{23};
        cout << "The color is green " << car_count << " cars on the move!" << endl;
    }else{
        cout << "The color is not green" << endl;
    }
    
    return 0;
}