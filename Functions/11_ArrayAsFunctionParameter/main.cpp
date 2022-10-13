#include <iostream>
#include <array>
using namespace std;

#include "array.h"

int main(){

    double myArray[] {1.1,2.2,3.3,4.4,5.5};
    
    cout << sum(myArray, std::size(myArray)) << endl;
    cout << sumPointer(myArray, std::size(myArray)) << endl;
    return 0;
}

