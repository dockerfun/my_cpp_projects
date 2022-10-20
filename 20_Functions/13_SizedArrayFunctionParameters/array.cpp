#include <iostream>
using namespace std;

//the size within brackets will be ignored
//suggested leaving empty, like scores[]
double sum(double scores[5], size_t count){
    double sum{};

    for(size_t i{}; i<count;++i){
        sum += *(scores+i);
    }
   return sum;  
}
	