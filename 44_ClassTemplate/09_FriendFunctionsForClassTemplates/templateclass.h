#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H
#include <iostream>

template<typename T>
class TemplateClass; // forward declare to make function declaration possible

template<typename T> // declaration
void some_func(TemplateClass<T>); 

template<typename T>
class TemplateClass{
    friend void some_func<T>(TemplateClass<T> param);
public:
    explicit TemplateClass<T>(){}
    void set_up(T param){
        m_var=param;
    }
    void do_something(const T a, T b){
        std::cout << "Doing something with " << a << " and " << b << std::endl;
    }
private:
    T m_var;
};

template<typename T> // definition
void some_func(TemplateClass<T> param){
    std::cout << "Inside some_func " << std::endl;
    std::cout << "m_var (private param): " << param.m_var << std::endl;
}

#endif //TEMPLATECLASS_H