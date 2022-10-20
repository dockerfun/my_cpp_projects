#include <iostream>
using namespace std;

#include "array.h"

int main(){

    double student_scores[] {10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0};
    double sum_result = sum(student_scores, size(student_scores));
    cout << "result : " << sum_result << endl;

    return 0;
}