#include <iostream>
#include "boxcontainer.h"
#include "point.h"

template class BoxContainer<double, 10>;
template class BoxContainer<std::string, 5>;
template class Point<int, 3>;
template class Point<double, 5>;
template class Point<char, 4>;

int main(){
    
    /* code */
    Point<int, 3> point_3d;
    point_3d.set_value(0,10);
    point_3d.set_value(1,20);
    point_3d.set_value(2,30);
    point_3d.print_info();

    Point<double> point_double;
    point_double.set_value(0, 3.21);
    point_double.set_value(1, 6.91);

    Point<char, 4> point_char;
    point_char.set_value(0, 'x');
    point_char.set_value(1, 't');
    point_char.set_value(2, 'r');
    point_char.set_value(3, 'z');
    point_char.set_value(5, 'i');
    point_char.print_info();

    std::cout << "End" << std::endl;
  
    return 0;
}