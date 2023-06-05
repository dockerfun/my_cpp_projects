#include <iostream>
#include <algorithm>
#include <ranges>
#include <vector>
using namespace std;

template <typename T>
void print_collection(const T &collection)
{
    std::cout << "Collection : [";
    for (const auto &elf : collection)
    {
        std::cout << elf << " ";
    }
    std::cout << "]";
}

int main()
{

    /* code */
    int collection[]{2, 5, 7, 32, 44, 33, 11};
    // std::all_of, lambda function predicate
    //  if (std::all_of(std::begin(collection), std::end(collection), [](int i){ return i % 2 == 0; }))
    //  {
    //      std::cout << "(std::all_of) : All members in collection are even" << std::endl;
    //  }
    //  else
    //  {
    //      std::cout << "(std::all_of) : Not all numbers in collection are even" << std::endl;
    //  }

    std::vector<int> numbers{11, 1, 5, 13, 5, 3, 17, 9};
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "std::ranges::all_of() : " << std::endl;

    auto odd = [](int n)
    {
        return n % 2 != 0;
    };

    auto result = std::ranges::all_of(numbers, odd);

    if (result)
    {
        std::cout << "All elements in numbers are odd" << std::endl;
    }
    else
    {
        std::cout << "Not all elements in numbers are odd" << std::endl;
    }

    return 0;
}