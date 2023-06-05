#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void print_collection(const T &collection)
{
    std::cout << "Collection [";
    for (const auto &elt : collection)
    {
        std::cout << " " << elt;
    }
    std::cout << "]" << std::endl;
}

int main()
{

    /* code */
    // Directly without predicate
    std::vector<int> collection = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    std::cout << "collection(unsorted) : ";
    print_collection(collection);

    //std::sort(std::begin(collection), std::end(collection));
    // std::sort(std::begin(collection), std::end(collection), std::less<int>());
     std::sort(std::begin(collection), std::end(collection), std::greater<int>());
    // std::sort(std::begin(collection), std::end(collection), [](int x, int y){ return x < y; });

    std::cout << "collection(sorted) : ";
    print_collection(collection);

    return 0;
}