#include <iostream>
#include <cstring>
using namespace std;

//Default template parameters: specify a value for a type
template <int threshold, typename T> //non type template parameter, placeholder for a value
bool is_valid(T collection[], size_t size){
    T sum{};
    for(size_t i{0};i<size;++i){
        sum+=collection[i];
    }
    return (sum>threshold)?true:false;
}

// template <typename T, double coeff>
// T process(T a, T b){
//     return a*b-coeff;
// }

int main(int argc, char **argv){
    
    /* code */
    /**
     * Decltype example
    */
    double temperatures[] {10.0,20.0,30.0,40.0,50.0};

    //e.g.: check if set of temperature is valid
    bool valid = is_valid<100, double>(temperatures, size(temperatures));
    cout << boolalpha << "valid: " << valid << endl;

    //cout << "process: " << process<double, 5.5>(10.0, 2.0) << endl;

    return 0;
}