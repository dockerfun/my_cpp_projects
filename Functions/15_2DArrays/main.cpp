#include <iostream>
using namespace std;

#include "array.h"

int main(){

    //Sized array passed by reference
    double weights[][3]{
        {10.0,11.0,12.0},
        {2.0,3.0,4.0},
        {6.0,4.5,9.2}
    };

    double weights_3d [][3][2]{
        {
            {10,20},
            {30,40},
            {50,60}
        },
        {
            {2,3},
            {3,4},
            {6,5}
        }
    };

    double sum_result_2d = sum_2d(weights, size(weights));
    double sum_result_3d = sum_3d(weights_3d, size(weights_3d));
    
    cout << "result : " << sum_result_2d << endl;
    cout << "result : " << sum_result_3d << endl;

    return 0;
}