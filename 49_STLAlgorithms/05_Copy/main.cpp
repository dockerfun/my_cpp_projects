#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print_collection(const T &collection)
{
    std::cout << " Collection [";
    for (const auto &elt : collection)
    {
        std::cout << " " << elt;
    }

    std::cout << "]" << std::endl;
}

int main()
{

    /* code */
    int source[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::vector<int> dest{15, 21, 12, 53, 30, 40};

    std::cout << "souce : ";
    print_collection(source);

    std::cout << "dest : ";
    print_collection(dest);

    // Copy from source to dest
    // Copy elements from source in the range [std::begin(source), std::begin(source) + 4)]
    // to dest, starting from iterator std::begin(dest)
    // Make sure you are copying from valid ranges either in dest or source.
    std::copy(std::begin(source), std::begin(source) + 4, std::begin(dest));

    std::cout << "source(after copy) : ";
    print_collection(source);

    std::cout << "dest(after copy) : ";
    print_collection(dest);

    return 0;
}