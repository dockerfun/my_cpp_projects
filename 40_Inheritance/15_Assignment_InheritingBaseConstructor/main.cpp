#include <iostream>
using namespace std;
#include "exercise.h"

int main(){
    
    /* code */
    Three t1(11,2,7);
    Three t2(1,1,1);
    t2 = t1;
    t2.print();

    return 0;
}