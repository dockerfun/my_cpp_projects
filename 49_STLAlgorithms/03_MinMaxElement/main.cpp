#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    /* code */
    int v[]{3, 400, 51, 6, 7, 23, 56, 43};
    auto result = std::max_element(std::begin(v), std::end(v));
    std::cout << "max element is : " << *result << std::endl;

    result = std::min_element(std::begin(v), std::end(v));
    std::cout << "min element is : " << *result << std::endl;

    //Distances : closest and furthest
    int number_to_find{67};

    auto distance = [number_to_find](int x, int y){
        //std::cout << "(x: " << x << ", y: " << y << ")" << std::endl;
        return (std::abs(x-number_to_find) < std::abs(y-number_to_find));
    };

    //Finding the closest
    result = std::min_element(std::begin(v), std::end(v), distance);
    std::cout << *result << " is closest to " << number_to_find << std::endl;

    //Finding the furthest
    result = std::max_element(std::begin(v), std::end(v), distance);
    std::cout << *result << " is futhest from " << number_to_find << std::endl;

    //Capturing min and max in pair object with the auto syntax
    const auto[near, far] = std::minmax_element(std::begin(v), std::end(v), distance);
    std::cout << *near << " is closest to " << number_to_find << std::endl;
    std::cout << *far << " is furthest from " << number_to_find << std::endl;
    
    return 0;
}