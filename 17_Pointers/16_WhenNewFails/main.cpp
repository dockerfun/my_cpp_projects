#include <iostream>
using namespace std;

int main(){

    //int * data = new int[100000000000]; //bad_alloc

    // for (size_t i{}; i<100000000000; ++i){
    //     int * data = new int[100000];
    // }

    //Exception mechanism
    //Handling the exception

    // for (size_t i{}; i<100000; ++i){
    //     try{
    //         int * data = new int[100000];
    //     }catch(exception& ex){
    //         cout << "Error: " << ex.what() << endl;
    //         break;
    //     }
    // }
    
    for (size_t i{}; i<10; ++i){
        int * data = new(nothrow) int[1000000000];
        if (data!=nullptr){
            cout << "Data allocated" << endl;
        }else{
            cout << "Data allocation failed" << endl;
        }
    }


    cout << "Program ending well" << endl;
    return 0;
}