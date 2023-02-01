#include <iostream>
#include <functional>
using namespace std;

    // A simple function that takes an input and returns its square
    std::function<int(int)> square = [](int x)
    { return x * x; };

    // Another function that takes two inputs and returns their sum
    std::function<int(int, int)> add = [](int a, int b)
    { return a + b; };

    // Using the above functions to calculate the sum of squares of two numbers
    std::function<int(int, int)> sumOfSquares = [](int x, int y)
    { return add(square(x), square(y)); }; //13

int main()
{

    /* code */
    cout << sumOfSquares(2,3) << endl;

    return 0;
}