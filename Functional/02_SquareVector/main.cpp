#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

std::function<int(int)> square_func = [](int x) { return x*x; };

std::vector<int> squareVector(const std::vector<int> &numbers){
    std::vector<int> result;
    result.reserve(numbers.size());
    std::transform(numbers.begin(), numbers.end(), std::back_inserter(result), square_func);
    return result;
}

int main(){
    
    /* code */
    std::vector<int> numbers = { 1, 3, 6 };
    std::vector<int> squares = squareVector(numbers);

    for(int x : squares){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}