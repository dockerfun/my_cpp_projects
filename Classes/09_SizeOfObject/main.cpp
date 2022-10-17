#include <iostream>
#include "wrapper.h"

using namespace std;

class Dog{
public:
    Dog()=default;

private:
    size_t leg_count{};
    size_t arm_cout{};
    int * p_age{};
    string name {"ajéslfkasdféalskdfjasédlfjélsfkjasdélfkja sflkasjfaélsfkjasdlfjasédlfakjsdfélakjsdféalskjf"};
};

int main(){

    Dog dog1;
    cout << "size (Dog) : " << sizeof(Dog) << endl;
    cout << "sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "" << endl;
    cout << "Done!" << endl;
    return 0;
}