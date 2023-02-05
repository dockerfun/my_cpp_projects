#include <iostream>
using namespace std;

int main()
{
    string str;

    try {
        throw string("1");
    }
    catch(string &str) {
        cout << str; // 1
    }
}