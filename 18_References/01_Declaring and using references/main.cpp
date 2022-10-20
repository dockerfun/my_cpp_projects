#include <iostream>
using namespace std;

int main(){
    int int_data{33};
    double double_data{55};

    //references
    int& int_data_ref {int_data};
    double& double_data_ref{double_data};

    //print out few things
    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "int_data_ref: " << int_data_ref << endl;
    cout << "&int_data_ref: " << &int_data_ref<< endl;

    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;
    cout << "double_data_ref: " << double_data_ref << endl;
    cout << "&double_data_ref: " << &double_data_ref<< endl;

    cout << endl;
    //making changes will affect the reference values
    int_data = 111;
    double_data = 23.5;

    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "int_data_ref: " << int_data_ref << endl;
    cout << "&int_data_ref: " << &int_data_ref<< endl;

    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;
    cout << "double_data_ref: " << double_data_ref << endl;
    cout << "&double_data_ref: " << &double_data_ref<< endl;
  
    cout << endl;
    //vica-versa
    int_data_ref = 10;
    double_data_ref = 3.52;

    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "int_data_ref: " << int_data_ref << endl;
    cout << "&int_data_ref: " << &int_data_ref<< endl;

    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;
    cout << "double_data_ref: " << double_data_ref << endl;
    cout << "&double_data_ref: " << &double_data_ref<< endl;  

    return 0;
}