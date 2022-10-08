#include <iostream>
using namespace std;

int addNumbers(int a, int b){
    return a + b;
}

int main(){
    int first_number{3};
    int second_number{5};

    cout << "First number: " << first_number << endl;
    cout << "Second number: " << second_number << endl;

    //sum
    int sum = first_number + second_number;

    cout << "Sum number: " << sum << endl;
    cout << "Sum number: " << addNumbers(first_number, second_number) << endl;
    
    return 0;
}