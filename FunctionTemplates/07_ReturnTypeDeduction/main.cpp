#include <iostream>
#include <cstring>
using namespace std;

//return type deduction
template <typename T, typename P>
auto maximum(T a, P b){
    return a>b?a:b;
}

int main(int argc, char **argv){
    
    /* code */
    /**
     * Return type deducion example
    */
   
   // Largest type is going to be deduced as return type

   auto max1 = maximum(12.5, 33); // double return type deduced
   cout << "max1: " << max1 << endl;
   cout << "sizeof(max1): " << sizeof(max1) << endl;

   auto max2 = maximum<double, int>('b', 99);
   cout << "max2: " << max2 << endl; // int return type deduced
   cout << "sizeof(max2): " << sizeof(max2) << endl;

    return 0;
} 