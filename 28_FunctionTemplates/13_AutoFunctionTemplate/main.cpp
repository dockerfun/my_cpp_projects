#include <iostream>
#include <cstring>
using namespace std;

template <typename T, typename P>
decltype(auto) func2(T a, P b){
    return a +b;
}

//auto function type example
auto func(auto a, auto b){
    return a + b;
}


int main(int argc, char **argv){
    
    /* code */
    /**
     * check if set of temperature is valid
    */
    auto result = func(10, 20.0);
    cout << "result: " << result << endl;

    auto result2 = func2(10, 20.0);
    cout << "result2: " << result2 << endl;

    return 0;
}