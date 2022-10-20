#include <iostream>
using namespace std;

int main(){
    
    /*cout << endl;
    cout << "Raw variable that can be modified: " << endl;

    int number{5};
    cout << "number: " << number << endl;
    cout << "number: " << &number << endl;

    //modify
    number = 12;
    number += 17;

    //Access - Print Out
    cout << "number :" << number << endl;
    cout << "&number: " << &number << endl;
    cout << endl;*/

    //Pointer: Can modify the data and the pointer itself
    /*int *p_number1 {nullptr};
    int number1{5};

    p_number1 = &number1;

    cout << "Pointer and value pointed to : both modifiable : " << endl;
    cout << "p_number1 : " << p_number1 << endl;  //address
    cout << "p_number1 : " << *p_number1 << endl; // 5
    cout << "number1 : " << number1 << endl;      //5

    //Change the pointed value through the pointer
    cout << endl;
    cout << "Modifying the value pointed to p_number1 through the pointer" << endl;
    *p_number1 = 45;
    cout << "p_number1 : " << p_number1 << endl; //address
    cout << "p_number1 : " << *p_number1 << endl;//45
    cout <<"number1 : " << number1 << endl;      //45

    //Change the pointer itself to make it point somewhere else
    cout << endl;
    cout << "Changing the pointer itself to make it point somewhere else" << endl;
    int number2 {8};
    p_number1 = &number2;
    cout << "p_number1 : " << p_number1 << endl;
    cout << "*p_number1 : " << *p_number1 << endl;
    cout << "number1 : " << number1 << endl;
    cout << "number2 : " << number2 << endl;
    cout << endl;*/

    /*
    int number3 {5};
    const int *p_number3 {&number3};
    cout << "p_number3: " << p_number3 << endl;
    cout << "*p_number3" << *p_number3 << endl;
    cout << endl;
    cout << "Modify the value pointed to by p_number3 throught the pointer (Compile Error): " << endl;
    //*p_number3 = 444; //Compile Error

    cout << endl;
    cout << "Changing the address pointed to by p_number3 : " << endl;
    const int number4 {6};
    p_number3 = &number4;

    cout << "p_number : " << p_number3 << endl;
    cout << "*p_number : " << *p_number3 << endl;
    cout << "number4 : " << number4 << endl;
*/

    //p_protected_var is a pointer to const data, we cannot modify the data
    //through this pointer, regardless of whether the data itself is declared
    //const or not.
    /*int protected_var{10};
    const int* p_protected_var {&protected_var};

    //*p_protected_var = 44;
    protected_var = 33;
    cout << "protected_var : " << protected_var << endl;
    cout << "p_protected_var : " << p_protected_var << endl;
    cout << "*p_protected_var : " << *p_protected_var << endl;
*/
    //const int some_data {55};
    //int* p_some_data {&some_data}; //this will not work

    //const int* const example
    /*const int number5 {8};
    const int * const p_number5 {&number5};
    cout << "Pointer is constant, value pointed to is constant: " << endl;
    cout << "p_number5 : " << p_number5 << endl;
    cout << "*p_number5 : " << *p_number5 << endl;
    cout << endl;
*/

    //Example with const pointer
    int number7 {9};
    int* const p_number7 {&number7};

    cout << "p_number7: " << p_number7 << endl;
    cout << "*p_number7: " << *p_number7 << endl;
    cout << "Changing value pointer to through p_number7 pointer : " << endl;
    
    *p_number7 = 456;
    cout << "The value pointer to by p_number7 no is : " << *p_number7 <<endl;
    cout << "The value of number7 is now : " << number7 << endl;

    int number8 {877};
    cout << "Changing the address where p_number7 is pointint (Compile Error" << endl;

    //p_number7 = &number8;

    return 0;
}