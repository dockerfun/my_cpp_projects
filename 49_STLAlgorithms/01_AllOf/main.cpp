#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

class DivisibleBy
{
private:
    const int d;

public:
    DivisibleBy(int n) : d(n) {}
    bool operator()(int n) const { return n % d == 0; }
};

bool is_odd(int n)
{
    return n % 2 != 0;
}

int main()
{

    /* code */
    // std::vector<int> collection{2, 6, 8, 40, 64, 70};
    // std::set<int> collection2{2, 6, 8, 40, 64, 70};
    int coll[]{1, 2, 4, 6, 8, 7, 10};

    // std::all_of, lambda function predicate -> for vectors, sets, raw arrays ...
    if (all_of(begin(coll), end(coll), [](int i)
               { return i % 2 == 0; }))
    {
        cout << "All numbers in collection are even" << endl;
    }
    else
    {
        cout << "Not all numbers in collection are even" << endl;
    }

    // std::any_of, functor as predicate
    if (std::any_of(begin(coll), end(coll), DivisibleBy(7)))
    {
        cout << "At least one numbers is divisible by 7" << endl;
    }
    else
    {
        cout << "None of the numbers is divisible by 7" << endl;
    }

    //std::none_of , function pointer as predicate
    if (std::none_of(std::begin(coll), std::end(coll), is_odd)){
        std::cout << "(std::none_of) : None of the numbers is odd" << std::endl;
    }else{
        std::cout << "(std::none_of) : At least one number is odd" << std::endl;
    }

    return 0;
}