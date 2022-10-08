#include <iostream>

int main()
{
    double a = 2.2;
    int b = 1;

    b = a;
    //b = static_cast<int>(a);
    std::cout << "b=" << b << std::endl; 
}