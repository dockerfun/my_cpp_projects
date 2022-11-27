#ifndef _CLASS_
#define _CLASS_

template <class T>
class A {
    T _v;
public:
    A() {}
    A(T v);
    T getV();
};

template<typename T>
A<T>::A(T v):_v(v) 
{}

template<typename T>
T A<T>::getV(){ 
    return _v; 
}

#endif