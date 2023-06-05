#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    /* code */
    std::vector<int> nums{3, 4, 2, 8, 15, 267};

    auto print = [](const int &n)
    {
        std::cout << " " << n;
    };

    std::for_each(std::begin(nums), std::end(nums), print);

    std::cout << std::endl;

    std::cout << "---------------------------------------" << std::endl;

    // Predicate that modifies elements in place
    std::for_each(std::begin(nums), std::end(nums), [](int &n){ n++; });

    //Print
    std::for_each(std::begin(nums), std::end(nums), print);
    std::cout << std::endl;

    return 0;
}