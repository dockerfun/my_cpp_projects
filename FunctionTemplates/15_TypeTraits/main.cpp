#include <iostream>
using namespace std;

/**
 * Conditional compile time programming
*/
template <typename T>
void print_number(T n){
    //static_assert(is_integral<T>::value, "Must pass in an integral argument");
    static_assert(is_integral_v<T>, "print_number() can only be called with integral types");
    cout << "n: " << n << endl;
}

int main(int argc, char **argv){

    /* code */
    /**
     * A mechanism to query information about a (templated) type at 
     * compile time
    */

    int a {45};
    cout << boolalpha;
    cout << "is_integral<int> : " << is_integral<int>::value << endl;
    cout << "is_integral<double> : " << is_integral<double>::value << endl;
    cout << "is_floating_point<int> : " << is_floating_point<int>::value << endl;
   
    //Compiler error: it is designed to work on types not on values
    //cout << "is_integral<a> : " << is_integral<a>::value << endl;

    print_number(5);

    // auto func = []<typename T>(T a, T b){
    //     static_assert(is_integral_v<T>, "func can only be called with integral type");
    //     return a + b;
    // };

    // double x{7};
    // double y{6};
    // func(x,y); //static_assertion message shows up
 
    return 0;
}