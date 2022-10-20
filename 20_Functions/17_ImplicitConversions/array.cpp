#include <iostream>
using namespace std;

//Implicit conversion
void print_sum(int a, int b){
    int sum = a + b;
    cout << "sizeof(a): " << sizeof(a) << endl;
    cout << "sizeof(b): " << sizeof(b) << endl;
    cout << "sum: " << sum << endl;
    cout << endl;
}