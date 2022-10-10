#include <iostream>
using namespace std;

int main(){
    cout << endl;
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

    cout << endl;

    return 0;
}