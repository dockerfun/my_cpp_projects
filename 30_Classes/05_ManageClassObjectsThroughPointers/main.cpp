#include <iostream>
#include "Cylinder.h"
using namespace std;

int main(){

    Cylinder c1;
    cout << "volume of c1: " << c1.volume() << endl;

    Cylinder * c2 = new Cylinder(11,20); //Create object on a heap

    cout << "volume c2 : " << (*c2).volume() << endl;
    cout << "volume c2 : " << c2->volume() << endl;

    delete c2;

    Cylinder * c3 = &c1;

    cout << "volume c3 : " << (*c3).volume() << endl;
    cout << "volume c3 : " << c3->volume() << endl;

    delete c3;
    
    return 0;
}