#include<iostream>
using namespace std;

int main()
{
    bool result;
    int a = 5;
    int b = 8;

    result = (a > 3) && (b > 5);
    cout << "(a > 3) && (b > 5) is " << result << endl;

    result = (a > 3)  && (b < 5);
    cout << "(a > 3)  && (b < 5) is " << result << endl;
    
    result = (a > 3) || (b > 5);
    cout << "(a > 3) || (b > 5) is " << result << endl;
    
    result =  (a > 3) || (b < 5);
    cout << " (a > 3) || (b < 5) is " << result << endl;
    
    result = (a < 3) || (b < 5);
    cout << "(a < 3) || (b < 5) is " << result << endl;
    
    result = !(a < 3);
    cout << "(a < 3) is " << result << endl;
    
    result = !(a > 3);
    cout << "(a > 3) is " << result << endl;
    
}