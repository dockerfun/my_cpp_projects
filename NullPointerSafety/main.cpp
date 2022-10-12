#include <iostream>
using namespace std;

int main(){

    //Making sure the pointers contain valid memory addresses
    //int number {5};
    //int *p_number{nullptr};
    int *p_number{};
    //p_number = new int {7};


    // if(!(p_number == nullptr)){
    //     cout << "p_number points to a VALID address : " << p_number << endl;
    // }else{
    //     cout << "p_number points to an INVALID address." << endl;
    // }

    //Compact nullptr check
    if(p_number){
        cout << "p_number points to a VALID address : " << p_number << endl;
    }else{
        cout << "p_number points to an INVALID address. " << endl;
    }

    delete p_number;
    p_number = nullptr;

    //call delete on nullptr
    int *p_number1 {};
    delete p_number1;

    cout << "Nullptr deleted successfuly" << endl;

    return 0;
} 