/**
 * Namespaces
 * 
 * A facility in the C++ programming language to avoid name conflicts
*/
#include <iostream>
using namespace std;

double add(double a, double b){
    return a+b;
}

namespace MyThing {
    double add(double a, double b){
        return a+b-1;
    }
    void do_something(){
        double result = ::add(5,6);
        cout << "result: " << result << endl;
    }
}

int main(){
    MyThing::do_something();
}