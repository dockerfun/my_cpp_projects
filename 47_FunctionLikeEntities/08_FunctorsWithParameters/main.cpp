/**
 * FUNCTOR: 
 *  - Class objects that can be called like ordinary functions
 *  - We set them up by overloading the () operator for our class
 * 
 * A functor can take parameters and internally store them as member
 * variables
*/

#include <iostream>
#include "boxcontainer.h"
#include <functional>
using namespace std;

template <typename T>
requires std::is_arithmetic_v<T>
class IsInRange{
public:
    IsInRange(T min, T max)
        : min_inclusive(min), max_inclusive(max){}
    bool operator()(T value){
        return ((value >= min_inclusive) && (value<=max_inclusive));
    }
private:
    T min_inclusive;
    T max_inclusive;
};

/* Compute the sum of elements that are within a given range */

template<typename T, typename RangePicker>
requires std::is_arithmetic_v<T>
T range_sum(const BoxContainer<T>& collection, RangePicker is_in_range){
    T sum{};
    for(size_t i{};i<collection.size();++i){
        if(is_in_range(collection.get_item(i))){
            sum += collection.get_item(i);
        }
    }
    return sum;
}

int main(){
    
    /* code */
    BoxContainer<double> doubles;
    doubles.add(10.1);
    doubles.add(20.2);
    doubles.add(30.3);

    std::cout << "doubles: " << doubles << std::endl;
    std::cout << "range sum: " 
        << range_sum(doubles, IsInRange<double>(10.0, 15.5)) << std::endl;

    std::cout << "range sum: " 
        << range_sum(doubles, IsInRange<double>(10.0, 21.5)) << std::endl;
     
    return 0;
}