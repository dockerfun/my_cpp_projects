#include <iostream>
#include <cstring>
using namespace std;

// template <typename T, typename P>
// auto maximum(T a, P b) -> decltype((a>b)?a:b){
//     return (a>b)?a:b;
// }

template <typename T, typename P>
decltype(auto) maximum(T a, P b){//cannot split the declaration 
    return (a>b)?a:b;
}

template <typename T, typename P>
auto maximum2(T a, P b)-> decltype(a+b);


int main(int argc, char **argv){
    
    /* code */
    /**
     * Decltype example
    */
   
    int a{9};
    double b{8.67};

    auto max = maximum(a,b);
    cout << "max: " << max << endl;

    auto max2 = maximum2(a,b);
    cout << "max: " << max2 << endl;

    return 0;
}

template <typename T, typename P>
auto maximum2(T a, P b)-> decltype(a+b){
    return a+b;
}