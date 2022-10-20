#include <iostream>
#include "Cylinder.h"
using namespace std;

int main(){
    //Design our own type
    Cylinder c1;
    cout << "volume of c1: " << c1.volume() << endl;
    // Cylinder c2(3.0, 2.4); //Object
    // cout << "volume of c2: " << c2.volume() << endl;
    // Cylinder c3(2); //Object
    // cout << "volume of c3: " << c3.volume() << endl;

    return 0;
}