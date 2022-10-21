#include <iostream>
using namespace std;

#include "person.h"

double weight {}; //can't have multiple definition for variable

double add(double a, double b);

struct Point{
    double m_x{};
    double m_y{};
};

int main(){
    
    /* code */
    auto result = add(10.1, 20.9);
    std::cout << "result : " << result << std::endl;

    Point p1;
    Point p2;
    
    std::cout << "p1_x: " << p1.m_x << std::endl;

    std::cout << std::endl;

    Person("Valaki", 23);
    std::cout << "person_count : " << Person::person_count << std::endl;

    Person("Másvalaki", 54);
    std::cout << "person_count : " << Person::person_count << std::endl;
    

    return 0;
}

double add(double a, double b){
    return a+b;
}


// double add(double a, double b){
//     return a+b;
// }
