#include <iostream>

inline double threshold{11.1};//inline : to avoid linker failure

inline double add(double a, double b){//inline : to avoid linker failure
    if((a>11.1) && (b>11.1)){
        return a+b;
    }else{
        return threshold;
    }
}