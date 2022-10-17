#include <iostream>
using namespace std;

//prototype
//blueprint for a max funtion
template <typename T> T maximum(T a, T b);

int main(int argc, char **argv){
    
    /* code */
    int a{10};
    int b{23};

    cout << "max(int): " << maximum(a, b) << endl; 

    double c{4.3};
    double d{6.75};

    cout << "max(double): " << maximum(c, d) << endl;

    string e {"Hello"};
    string f{"HelloWorld"};

    cout << "max(string): " << maximum(e,f) << endl;

    
    return 0;
}

template <typename T> 
T maximum(T a, T b){
    return (a>b)?a:b;
}