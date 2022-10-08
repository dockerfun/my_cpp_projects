#include<iostream>

using namespace std;

string BoolToStr(const bool& isTrue)
{
    return isTrue ? "True" : "False";
};

int main()
{
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);
    cout << "3 == 5 is " << BoolToStr(result) << endl;

    result = (a != b);
    cout << "3 != 5 is " << BoolToStr(result) << endl;
    
    result = (a > b);
    cout << "3 > 5 is " << BoolToStr(result) << endl;
    
    result = (a < b);
    cout << "3 < 5 is " << BoolToStr(result) << endl;
    
    result = (a >= b);
    cout << "3 >= 5 is " << BoolToStr(result) << endl;
    
    result = (a <= b);
    cout << "3 <= 5 is " << BoolToStr(result) << endl;
    
}