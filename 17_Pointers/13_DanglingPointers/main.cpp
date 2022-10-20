#include <iostream>
using namespace std;


template<typename T>
void PrintOut(T s){
    cout << "Parameter: " << s << endl;
};

int main(int argc, char **argv) {

    /* Dangling pointer a pointer that does not point to valid memory address. 
     *Trying to dereference and use a dangling pointer will result in undefined 
     *behavior
     */

    //1. Uninitalized pointer
    /*int *p_number; //dangling uninitialized pointer

    //PrintOut(*p_number);
    cout << endl;
    cout << "Case 1" << endl;
    cout << "*p_number : " << *p_number << endl;*/

    //2. Deleted pointer
    int *p_number1 {new int{34}};
    cout << "*p_number1 (before delete): " << *p_number1 << endl;
    delete p_number1;
    cout << "*p_number1 (after delete): " << *p_number1 << endl;

    //Solution 1: Initialize pointers immediately upon declaration
    cout << "Solution 1: " << endl;
    int *p_number5 {nullptr};
    int *p_number6{new int{56}};

    //check for nullptr before use
    if(p_number6!=nullptr){
        cout << "*p_number6 : " << *p_number6 << endl;
    }
    else{
        cout << "Invalid address " << endl;
    }

    //Solution 2:
    //right after you call delete on a pointer, remember to reset it to
    //nullptr to make it clear it does not point anywhere

    int *p_number7 {new int{82}};
    cout << "p_number7 - " << p_number7 << " - " << *p_number7 << endl;

    delete p_number7;
    p_number7 = nullptr;

    if(p_number7!=nullptr){
        cout << "*p_number7 : " << *p_number7 << endl;
    }

    //Solution 3:
    //For multiple pointers pointing to the same address, make sure there is
    //one clear pointer (master pointer) that owns the memory (responsible
    //for releasing when necessary), other pointers should only be able to
    //dereference when the master pointer is valid

    int *p_number8 {new int {322}};
    int *p_number9 {p_number8};

    //dereference the pointer and use them 
    cout << "p_number8 - " << p_number8 << " - " << *p_number8 << endl;

    if(!(p_number8 == nullptr)){//Only use the pointers when master pointer is valid
        cout << "p_number9 - " << p_number9 << " - " << *p_number9 << endl;
    }
 
    delete p_number8;
    p_number8 = nullptr;

    if(!(p_number8 == nullptr)){
        cout << "p_number9 - " << p_number9 << " - " << *p_number9 << endl;
    }else{
        cerr << "WARNING: Trying to use an invalid pointer" << endl;
    }

    return 0;
}