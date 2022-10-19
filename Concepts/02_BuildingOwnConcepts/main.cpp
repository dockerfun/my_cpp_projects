#include <iostream>
using namespace std;

/**
 * Concepts: Building my own concepts
*/

//Syntax
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept Multipliable = requires(T a, T b){
    a * b; //just makes sure the syntax is valid
};

template <typename T>
concept Incrementable = requires(T a) { a+=1;++a;a++; };


//Syntax 1
template <typename T>
requires Multipliable<T>
T func(T a, T b){
    return a*b;
}

//Syntax 2
template <MyIntegral T>
T add_2(T a, T b){
    return a + b;
}

auto add_3(MyIntegral auto a, MyIntegral auto b){
    return a+b;
}

int main(int argc, char **argv){

    /* code */
    /**
     * Building concepts
     * 
    */



    return 0;
}