#include <iostream>
#include <cstring>
using namespace std;

//Default template parameters
template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b);

int main(int argc, char **argv){
    
    /* code */
    /**
     * Decltype example
    */
   
    int a{2};
    double b{1.721};

    auto max = maximum(a,b);
    cout << "max: " << max << ", sizeof(max): " << sizeof(max) << endl;

    auto max2 = maximum<int>(a,b);
    cout << "max2: " << max2 << ", sizeof(max2): " << sizeof(max2) << endl;

    auto max3 = maximum<int, int, int>(a,b);
    cout << "max3: " << max3 << ", sizeof(max3): " << sizeof(max3) << endl;


    return 0;
}

template <typename ReturnType, typename T, typename P>
ReturnType maximum(T a, P b){
    return (a>b)?a:b;
}