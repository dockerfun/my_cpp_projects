#include <iostream>
using namespace std;
#include "mytemplate.h"

int main(){
    
    /* code */
    MyTemplate<int> my_int_template(2,3);
    std::cout << "Max: " << my_int_template.max() << std::endl;

    MyTemplate<double> my_double_template(2.3,3.1);
    std::cout << "Max: " << my_double_template.max() << std::endl;
    
    return 0;
}