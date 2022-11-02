#ifndef ADDER_H 
#define ADDER_H

#include <string>
#include <cstring>
#include <iostream>

template <typename T>
class Adder{
public:
    Adder(){

    }
    T add(T a, T b);
    void do_something(){
        std::cout << "Doing something..." << std::endl;
    }
};

template<typename T>
T Adder<T>::add(T a, T b){
    return a + b;
}

//Template specialization
template <>
class Adder <char*>{
public:
    Adder(){

    }
    void do_something(){
        std::cout << "Doing something (char*)..." << std::endl;
    }
    char * add(char* a, char* b);
};

// template <> <= this is not needed if define outside of class
char* Adder<char*>::add(char* a, char* b){
    return strcat(a,b);
}

#endif // ADDER_H