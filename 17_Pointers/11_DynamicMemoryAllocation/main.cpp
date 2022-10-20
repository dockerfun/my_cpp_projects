#include <iostream>
using namespace std;

int main(int argc, char **argv) {

    /*
    //stack lifetime example
    {
        int local_var {1};
        int *local_ptr_var = new int;
    }

    //cout << "*local_ptr_var: " << *local_ptr_var << endl;
    cout << endl;

    //Releasing and resetting
    delete local_ptr_var;
    local_ptr_var = nullptr;
    */

    //uninitialized pointer, contains junk address
    /*
    int *p_number1;
    int number1 {12};
    p_number1 = &number1;

    cout << endl;
    cout << "Uninitalized pointer : " << endl;
    cout << " *p_number1 : " << *p_number1 << endl;
    */
    //BAD
    //writing into uninitialized pointer through dereference
    /*int *p_number2;//contains junk address : could be anything
    cout << "Writing in the 55" << endl;
    *p_number2 = 55;//writing into junk address : BAD!

    cout <<endl;
    cout << "writing into uninitialized pointer through dereference: " << endl;
    cout << "p_number2 : " << p_number2 << endl;
    cout <<"*p_number2 : " << *p_number2 <<endl;*/

    //Initializing pointer to null
    //int *p_number3 {nullptr};
    /*int *p_number3 {};
    *p_number3 = 33;

    cout << "Reading and writing through nullptr" << endl;
    cout << "p_number3 : " << p_number3 << endl;
    */

    //Dynamic heap memory
    /*int *p_number4 {nullptr};
    p_number4 = new int;


    *p_number4= 65;
    cout << endl;
    cout << "Dynamically allocating memory : " << endl;
    cout << "*p_number4 : " << *p_number4 << endl;

    delete p_number4;
    p_number4 = nullptr;

    *p_number4 = 32;
    cout << "Done writing" << endl;
    */

   //dinamically initialize pointer 
   int *p_number5 {new int};
   int *p_number6 {new int (22)};
   int *p_number7 {new int {34}};

    cout << endl;
    cout << "Initialize with valid memory address at declaration" << endl;
    cout << "p_number5 : " << p_number5 << endl;
    cout << "*p_number5 : " << *p_number5 << endl;

    cout << "p_number6 : " << p_number6 << endl;
    cout << "*p_number6 : " << *p_number6 << endl;

    cout << "p_number7 : " << p_number7 << endl ;
    cout << "*p_number7 : " << *p_number7 << endl;

    delete p_number5;
    delete p_number6;
    delete p_number7;

    p_number5 = nullptr;
    p_number6 = nullptr;
    p_number7 = nullptr;

    //further use
    p_number5 = new int(77);
    cout << "Reuse deleted pointer: " << *p_number5 << endl;

    delete p_number5;
    p_number5 = nullptr;

    cout <<"Program is ending well" <<endl;


    return 0;
}