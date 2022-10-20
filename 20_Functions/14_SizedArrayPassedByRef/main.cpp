#include <iostream>
using namespace std;

#include "array.h"

int main(){

    //Sized array passed by reference
    double student_scores[] {10.0,30.0,40.0,50.0, 40.2};
    double sum_result = sum(student_scores);
    cout << "result : " << sum_result << endl;

    return 0;
}