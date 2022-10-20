#include <iostream>
#include "mytype.h"
using namespace std;

// template <typename T, typename P>
// auto add(T a, P b);
 
int main()
{
    auto result = add(11,22ul);//linker error
    std::cout << "result : " << result << std::endl;
    return 0;
}
 
// template <typename T, typename P>
// auto add(T a, P b){
//    return a + b;
// }