#include <iostream>
using namespace std;

int main(int argc, char **argv){

    /* code */
    /**
     * Named template parameters for lambdas
    */
    // auto func = [] (auto a, auto b){
    //     return a + b;
    // };
    //cout << func(10,20.6) << endl;

    //auto func2 = [](auto a, auto b){ return a+b; };

    // int a {5};
    // double b {43.2};

    // auto result = func2(a,b);
    // cout << "result: " << func2(a, b) << ", sizeof(result): " << sizeof(result) << endl;

    //func 3
    // auto func3 = [] <typename T>(T a, T b){ //Error - int, double
    //     return a + b;
    // };

    auto func3 = [] <typename T, typename P>(T a, P b){
        return a + b;
    };

    int a {'c'}; //99
    double b {4.3};

    auto result = func3(a,b);
    cout << "result: " << result << ", sizeof(result): " << sizeof(result) << endl;




    return 0;
}