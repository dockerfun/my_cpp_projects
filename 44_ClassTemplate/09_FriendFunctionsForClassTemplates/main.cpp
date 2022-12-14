#include <iostream>
#include "boxcontainer.h"
#include "point.h"
#include "adder.h"
#include "templateclass.h"

int main(){
    
    /* code -> templateclass.h */
    TemplateClass<int> obj1;
    obj1.set_up(10);

    TemplateClass<double> obj2;
    obj2.set_up(2.11);

    some_func(obj1);
    some_func(obj2);
  
    std::cout << "End" << std::endl;
  
    return 0;
}