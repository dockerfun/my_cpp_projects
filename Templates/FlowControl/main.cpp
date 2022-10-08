#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    //checks if the number is positive
    if (number > 0){
        cout << "Positive number: " << number << endl;
    }
    else {
        cout << "Negative number: " << number << endl;
    }

    cout << "Always executed section.. " << endl;

    return 0;
}