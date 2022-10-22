/**
 *  LOGICAL OPERATORS
*/

#include <iostream>
#include <utility>
#include "point.h"

/*
struct Foo {
    int n;
};

bool operator==(const Foo& lhs, const Foo& rhs){
    return lhs.n == rhs.n;
}

bool operator<(const Foo& lhs, const Foo& rhs){
    return lhs.n < rhs.n;
}*/

int main(){
    
    /* code */
    using namespace std::rel_ops;

    /**
     *  Rel Ops namespace *
     *
     */

    {
        // Foo f1{1};
        // Foo f2{2};

        // std::cout << std::boolalpha;
        // std::cout <<  "!= : " << (f1 != f2) << std::endl; 
        // std::cout <<  "> : " <<  (f1 > f2) << std::endl; 
        // std::cout <<  "<= : " << (f1 <= f2) << std::endl; 
        // std::cout <<  ">= : " << (f1 >= f2) << std::endl;
    }

    {
        Point p1(1,2);
        Point p2(4,1);

        std::cout << "p1: " << p1 << ", p2: " << p2 << std::endl;

        std::cout << std::boolalpha;
        std::cout << "p1>p2: " << (p1>p2) << std::endl;
        std::cout << "p1<p2: " << (p1<p2) << std::endl;
        std::cout << "p1>=p2: " << (p1>=p2) << std::endl;
        std::cout << "p1<=p2: " << (p1<=p2) << std::endl;
        std::cout << "p1==p2: " << (p1==p2) << std::endl;
        std::cout << "p1!=p2: " << (p1!=p2) << std::endl;


    }

    return 0;
}