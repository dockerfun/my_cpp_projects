#include <iostream>
using namespace std;

//prototype
//blueprint for a max funtion
//template <typename T> T maximum(T a, T b);
//template with reference type
template <typename T> const T& maximum(T& a, T& b);

int main(int argc, char **argv){
    
    /* code */
    double a {4.3};
    double b {6.75};

    cout << "Out - a&: " << &a << endl;
    double result = maximum(a,b);
    cout << "result: " << result << endl;

    return 0;
}

template <typename T> 
const T& maximum(T& a, T& b){
    cout << "within maximum function (&a): " << &a << endl;
    return (a>b)?a:b;
}