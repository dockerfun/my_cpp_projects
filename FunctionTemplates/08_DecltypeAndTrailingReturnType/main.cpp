#include <iostream>
#include <cstring>
using namespace std;

// template <typename T, typename P>
// auto maximum(T a, P b) -> decltype((a>b)?a:b);

template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a>b)?a:b);


int main(int argc, char **argv){
    
    /* code */
    /**
     * Decltype example
    */
   
   int a{9};
   double b{8.67};

   cout << "size: " << sizeof(decltype(((a>b)?a:b))) << endl;

   decltype((a>b?a:b)) c {67};
   cout << "c: " << c << endl;

   auto max1 = maximum(a,b);
   cout << "max: " << max1 << endl;

    return 0;
}

template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a>b)?a:b){
    return (a>b)?a:b;
}