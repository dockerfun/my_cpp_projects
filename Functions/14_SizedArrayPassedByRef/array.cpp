#include <iostream>
using namespace std;

//Sized array passed by reference
double sum(const double (&scores)[5]){
    double sum{};

    for(size_t i{}; i<size(scores);++i){
        sum += *(scores+i);
    }

    for (auto score : scores)
    {
        /* code */
        //sum += score;//VALID
    }
    
   return sum;  
}
	