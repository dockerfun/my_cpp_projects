#include <iostream>
using namespace std;



//Introduction
/**
 * Concepts: A mechanism to place constraints on your template type 
 * parameter
 * 
 * One of the four big features of C++ 20
 * 
 * There are standard built in concepts and custom concepts
 * 
 * Core language conteps: 
 *  same_as, derived_from, convertible_to, common_reference_with,
 *  common_with, integral, signed_integral, unsigned_integral, floating_point
*/

//Syntax 1
template <typename T> 
requires integral<T> //using template declaration
T add(T a, T b){
    return a + b;
}

template <typename T> 
requires is_integral_v<T> //using a type trait
T add_tt(T a, T b){
    return a + b;
}

template <typename T> 
requires floating_point<T>
T add_f(T a, T b){
    return a + b;
}

//Syntax 2
template <integral T>
T add_2(T a, T b){
    return a + b;
}

//Syntax 3
auto add_3(integral auto a, integral auto b){
    return a+b;
}

//Syntax 4
template <typename T>
T add_4(T a, T b) requires integral<T>{
    return a+b;
}

int main(int argc, char **argv){

    /* code */
    /**
     * Using concepts
    */

    char a_0{10};
    char a_1{20};

    auto result_a = add(a_0, a_1);
    cout << "result_a: " << static_cast<int>(result_a) << endl;

    int b_0{11};
    int b_1{5};
    auto result_b = add(b_0, b_1);
    cout << "result_b: " << result_b << endl;

    double c_0{11.1};
    double c_1{1.9};
    //auto result_c = add(c_0, c_1); //Error std::integral concept not satisfied.

    auto result_d = add_f(c_0, c_1); //Error std::integral concept not satisfied.
    cout << "result_d: " << result_d << endl;
    return 0;
}