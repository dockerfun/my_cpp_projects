/**
 * Namespaces
 * 
 * A facility in the C++ programming language to avoid name conflicts
*/
#include <iostream>
using namespace std;

const double adjustment {0.724};

namespace No_Weight {
    double mult(double x, double y);
    double add(double x, double y);
}

namespace Weight {
    double mult(double x, double y);
    double add(double x, double y);
}

int main(){
    
    /* code */
    double x = No_Weight::add(3,4);
    cout << "No_Weight: " << x << endl;


    
    return 0;
}

namespace No_Weight {

    double mult(double x, double y){
        return x*y;
    }
    double add(double x, double y){
        return x+y;
    }
}

namespace Weight {
    double mult(double x, double y){
        return (x*y)-adjustment;
    }
    double add(double x, double y){
        return x-y-adjustment;
    }
}