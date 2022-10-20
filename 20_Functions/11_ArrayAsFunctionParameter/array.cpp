#include <iostream>
using namespace std;

double sum(double array[], size_t count){
    double sum {};
    array[1] = 70.0;

    cout << "size of array : " << sizeof(array) << endl;
    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of long int : " << sizeof(long int *) << endl;

    for(size_t i{};i<count;++i){
        sum += *(array++);
    }
    return sum;
}

double sumPointer(double* array, size_t count){
    double sum {};
    array[1] = 70.0;

    cout << "size of array : " << sizeof(array) << endl;
    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of long int : " << sizeof(long int *) << endl;

    for(size_t i{};i<count;++i){
        sum += *(array++);
    }
    return sum;
}