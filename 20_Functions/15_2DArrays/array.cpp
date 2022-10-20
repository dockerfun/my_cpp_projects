#include <iostream>
using namespace std;

//2D Array
double sum_2d(const double array[][3], size_t size){
    double sum{};
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < 3; j++)
        {
            /* code */
            sum += *(*(array+i)+j);
        }  
    }
    return sum;
}

double sum_3d(const double array[][3][2], size_t size){
    double sum{};
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        for (size_t j = 0; j < 3; j++)
        {
            /* code */
            for (size_t k = 0; k < 2; k++)
            {
                /* code */
                sum += *(*(*(array+i)+j)+k);
            }
        }  
    }
    return sum;
}