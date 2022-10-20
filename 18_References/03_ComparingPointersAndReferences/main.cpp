#include <iostream>
using namespace std;

int main(){

    double double_value {43.22};
    double& ref_double_value {double_value};
    double* p_double_value {&double_value};

    //Reading
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    //writing through pointer
    *p_double_value = 13.44;

    cout << endl;

    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;  

    cout << endl;
    //writing through reference
    ref_double_value = 19.76;


    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    cout << endl;

    //make the pointer point to something else
    double some_other_double {3.22};
    p_double_value = &some_other_double;

    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    cout << endl;
    *p_double_value = 555.5;
    cout << "&ref_double_value: " << &ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << endl;

    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    return 0;
}