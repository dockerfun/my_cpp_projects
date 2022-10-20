/**
 * Namespaces
 * 
 * A facility in the C++ programming language to avoid name conflicts
*/
#include <iostream>
#include "point.h"
#include "line.h"
#include "cylinder.h"

using namespace std;


int main(){
    Geom::Point p1(10.0, 10.0);
    Geom::Point p2(20.1,20.1);
    p1.print_info();
    p2.print_info();

    cout << endl;

    Geom::Line l1(p1, p2);
    l1.print_info();

    const Geom::Cylinder c1(10,1);
    cout << "volume: " << c1.volume() << endl;
}