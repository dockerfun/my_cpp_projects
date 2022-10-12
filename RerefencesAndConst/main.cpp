#include <iostream>
using namespace std;


int main(){

    //References and const
    //non const reference
    cout << endl;
    cout <<"Non const reference : " << endl;
    int age {22};
    int& ref_age {age};

    cout << "age : " << age << endl;
    cout << "ref_age : " << ref_age << endl;

    //The original value can be modified through reference

    cout << endl;
    cout << "Modify original variable through reference : " << endl;
    ref_age++;

    cout << "age : " << age << endl;
    cout << "ref_age : " << ref_age << endl;

    //const reference 
    cout << endl;
    cout << "Const references : " << endl;
    age = 30;
    const int& const_ref_age {age};

    cout << "age : " << age << endl;
    cout << "const_ref_age : " << const_ref_age << endl;

    //Try to modify through const reference
    const_ref_age = 31; //Error

    //Const reference behavior with pointers
    const int* const const_ptr_to_const_age{&age};

    *const_ptr_to_const_age = 32; //Error

    //No such thing as:
    const int& const weird_ref_age{age}; //Error

    //Const applies to reference variable name. Not to original variable
    

    return 0;
}