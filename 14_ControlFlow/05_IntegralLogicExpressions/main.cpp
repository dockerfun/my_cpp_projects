#include <iostream>
using namespace std;

int main(){
    
    /* code */
    int item_count{-3};

    //Any number different than 0, or 
    //expression evaluating to something
    //othe than 0 -> TRUE

    if(item_count){
        cout << "We have items in the bag." << endl;
    }else{
        cout << "No items in the bag" << endl;
    }
    

    return 0;
}