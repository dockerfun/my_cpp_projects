#include <iostream>
using namespace std;

double add(double x, double y){
    return x+y;
}

int main(){
    
    /* code */

    /* LValues */
    int a{10};
    int b{21};
    int c{43};

    /* RValues */
    int x{10};
    int y{32};
    int z{31};

    z=(x+y); //the result of (x+y) is stored in memory for a short time
    //before it's assigned (copied) to z. After the assignment, the memory
    //is discarded (reclaimed by the system)

    /* Cannot grab the address of an rvalue */
    //std::cout << "temp value's address: " &(x+y) << std::endl;

    // Compiler error
    // std::cout << "error: " << &add(10.2, 32.1) << std::endl;

    //another example
    double result = add(10.1, 20.2);
    std::cout << "result is: " << result << std::endl;

    std::cout << std::endl;

    // Grab the address for later use
    // int *ptr1=&(x+y); // Compiler error
    // int *ptr2=&add(10.1, 20.2); // Compiler error
    // int *ptr3=&45;
    int *ptr4 = &x; // x is an lvalue, so e can grab its address

    //std::cout << "&(x+y): " << &(x+y) << std::endl; // Compiler error

    // rvalue reference
    int&& result_rvalue = x + y; // Extends the lifetime of the temp result

    double&& result_rvalue_add = add(12.0,14.3);

    std::cout << "result_rvalue: " << result_rvalue << std::endl;
    std::cout << "result_rvalue_add: " << result_rvalue_add << std::endl;
    
    std::cout << std::endl;
    
    return 0;
} 