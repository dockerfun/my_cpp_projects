#include <iostream>
using namespace std;

int main(){
    
    /* code */
    /* Precedence: which operation to do first 
       Associativity: which direction or which order */
    
    double a {6.0};
    double b {3.0};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    double g {5};

    int result = a + b * c - d / e - f + g;
    // 6 + 24 - 3 - 2 + 5 = 30

    std::cout << "result: " << result << std::endl;

    result = a / b * c + d - e + f;
    //6/3 = 2; 2*8=16; ... = 24
    std::cout << "result: " << result << std::endl;

    double result2 = a + b * f / c - d;
    std::cout << "result2: " << result2 << std::endl;
    return 0;
}