#include <iostream>
using namespace std;

//Implicit conversion with references
void increment(int& value){
    value++;
    cout << "value incremented to : " << value << endl;
}
void print_out(const int & value){
    cout << "value: " << value << endl;
}
