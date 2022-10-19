#include <iostream>
using namespace std;

void func_floating_point(double d){
    cout << "floating point func.." << endl;
}
void func_integral(int i){
    cout << "integral also.." << endl;
}

//define a template func in order to decide which function to call
/**
 * Parts discarded by 'constexpr if' aren't included in the template
 * instance
*/
template <typename T>
void func(T t){
    if constexpr(is_integral_v<T>){
        func_integral(t);
    } else if constexpr(is_floating_point_v<T>){
        func_floating_point(t);
    } else {
        static_assert(is_integral_v<T> || is_floating_point_v<T>, 
        "Argument must be integral or floating point");
    }
}

int main(int argc, char **argv){

    /* code */
    /**
     * Conditional compilation made easeier and more flexible
    */
    int a {6};
    double b{6.7543};
    char c {'a'};

   func(a);
   func(b);
   //func("Hello"); //assertion fail

    return 0;
}