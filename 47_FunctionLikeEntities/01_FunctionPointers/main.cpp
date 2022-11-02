/* Function pointers */

#include <iostream>
using namespace std;

double add_numbers(double a, double b){
    return a+b;
}

int main(){
    
    /* code */
    double (*f_ptr1)(double, double) = &add_numbers;
    double (*f_ptr2)(double, double) = add_numbers;
    double (*f_ptr3)(double, double) {add_numbers};
    double (*f_ptr4)(double, double) = {&add_numbers};

    // By using auto type deduction
    auto f_ptr5 = add_numbers;
    auto f_ptr6 = &add_numbers;
    auto* f_ptr7 = &add_numbers;
    auto * f_ptr8 = &add_numbers;

    std::cout << f_ptr1(10,20) << std::endl;
    
    return 0;
}