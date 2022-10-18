#include <iostream>
using namespace std;

//prototype
//blueprint for a max funtion
template <typename T> T maximum(T a, T b);
template <typename T> T multiply(T a, T b);

int main(int argc, char **argv){
    
    /* code */
    // int a{10};
    // int b{23};

    // cout << "max(int): " << maximum(a, b) << endl; 

    // double c{4.3};
    // double d{6.75};

    // cout << "max(double): " << maximum(c, d) << endl;

    // string e {"Hello"};
    // string f{"HelloWorld"};

    // cout << "max(string): " << maximum(e,f) << endl;

    int x{5};
    int y{7};

    int *p_x = {&x};
    int *p_y = {&y};

    auto result = maximum(p_x, p_y);
    cout << "result: " << *result << endl;//5! incorrect, because the memory addresses were compared
    //multiply(e, f); //build error with string

    // double g{10.2};
    // int h{7};

    // multiply(g, h); //error with different types
    

    return 0;
}

template <typename T> 
T maximum(T a, T b){
    return (a>b)?a:b;
}

template <typename T> 
T multiply(T a, T b){
    return a*b;
}