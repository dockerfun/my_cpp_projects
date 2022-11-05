/**
 * FUNCTOR: 
 *  - Class objects that can be called like ordinary functions
 *  - We set them up by overloading the () operator for our class
*/

#include <iostream>
#include "boxcontainer.h"
#include <functional>
using namespace std;

// Custom function
template <typename T>
bool custom_greater(const T& param1, const T& param2){
    if(param1>param2){
        return true;
    }
    return false;
}

// Custom functor
template<typename T>
class Greater{
    public:
    bool operator()(const T& param1, const T& param2){
        return (param1>param2)?true:false;
    }
};

template <typename T>
using Comparator = bool(*)(const T&, const T&);

template <typename T, typename Comparator>
T get_best(const BoxContainer<T>& sentence, Comparator comparator){
    T best = sentence.get_item(0);
    for(size_t i{0};i<sentence.size();++i){
        if(comparator(sentence.get_item(i), best)){
            best = sentence.get_item(i);
        }  
    }
    return best;
}

int main(){
    
    /* code */
    std::plus<int> adder;
    std::minus<int> substracter;
    std::greater<int> compare_greater;

    std::cout << std::boolalpha;
    std::cout << "10 + 7 : " << adder(10, 7) << std::endl;

    std::cout << "10 - 7 : " << substracter(10, 7) << std::endl;

    std::cout << "10 > 7 : " << compare_greater(10, 7) << std::endl;

    // 
    BoxContainer<std::string> quote;
    quote.add("The");
    quote.add("sky");
    quote.add("is");
    quote.add("blue");

    std::greater<std::string> string_comparator{};

    std::cout << "quote: " << quote << std::endl;

    try{
        std::cout << "greater string : " << get_best(quote, string_comparator) << std::endl;
        
        std::cout << "greater string : " << get_best(quote, custom_greater<std::string>) << std::endl;
        
        // Custom functor
        Greater<std::string> greater_str_custom_functor;
        std::cout << "greater string : " 
                  << get_best(quote, greater_str_custom_functor) 
                  << std::endl;
    }
    catch(exception& ex){
        std::cout << "Error: " << ex.what() << std::endl;
    }

    // int 
    std::cout << std::endl;

    BoxContainer<int> ints;
    ints.add(12);
    ints.add(16);
    ints.add(22);
    ints.add(64);
    ints.add(1);
    
    std::cout << "Int" << std::endl;

    std::greater<int> int_comparator{};
    Greater<int> greater_int_custom_functor;

    std::cout << "ints: " << ints << std::endl;
    std::cout << "greater int : " << get_best(ints, int_comparator) << std::endl;

    return 0;
}