/**
 * Namespaces
 * 
 * A facility in the C++ programming language to avoid name conflicts
*/
#include <iostream>
#include <string>
#include "point.h"
#include "line.h"

using std::string;
using Geom::Point;
//using namespace std; //Not recommended

int main(){
    
    {
        using std::cout;
        using std::endl;
        cout << "Hello World" << endl;

        string message{"HelloWorld"};
        cout << message << endl;
    }

    //cout << "ok" << endl; //Error

    Point p1(10.2, 3.4);
    p1.print_info();    
}