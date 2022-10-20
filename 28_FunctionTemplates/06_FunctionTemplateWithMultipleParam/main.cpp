#include <iostream>
#include <cstring>
using namespace std;

//function template 1
// template <typename ReturnType, typename T, typename P> 
// ReturnType maximum(T a, P b){
//     return (a>b)?a:b;
// }

//function template 2
// template <typename T, typename ReturnType, typename P>
// ReturnType maximum(T a, P b){
//     return (a>b)?a:b;
// }

//function template 3
// template <typename T, typename P, typename ReturnType>
// ReturnType maximum(T a, P b){
//     return (a>b)?a:b;
// }

//other example
template <typename T, typename P>
T maximum(T a, P b){
    return a>b?a:b;
}

int main(int argc, char **argv){
    
    /* code */
    /**
     * The order of the arguments matters
     * function template 1
    */

    // int max1 = maximum<int,char, long>('c', 12L);//OK
    // int max2 = maximum<int, char>('d', 12L);     //OK
    // int max3 = maximum<int>('e', 14L);           //OK
    // int max4 = maximum('f', 14L);                //Error: return type can't be deduced

    /**
     * function template 2
    */

    // int max5 = maximum<char, int, long>('c', 12L);   //OK
    // int max6 = maximum<char, int>('d', 12L);         //OK
    // int max7 = maximum<char>('e', 14L);  //Error: return type can't be deduced
    // int max8 = maximum('f', 14L);        //Error: return type can't be deduced

    /**
     * function template 3
    */
    // int max9 = maximum<char, long, int>('c', 12L);  //OK
    // int max10 = maximum<char, long>('d', 12L);      //Error
    // int max11 = maximum<char>('e', 14L);            //Error
    // int max12 = maximum('f', 14L);                  //Error

    int a {5};
    double b {6.7};

    //the returntype depends on the order of the arguments passed in
    cout <<"sizeof: " << sizeof(maximum(a, b)) << endl; //4 byte
    cout <<"sizeof: " << sizeof(maximum(b, a)) << endl; //8 byte


    return 0;
}