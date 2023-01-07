/* Which code, inserted at line 14, generates the output "Hello World"? */

#include <iostream>
#include <string>
using namespace std;

string fun(string, string);

int main()
{
    string s="Hello";
    string *ps;
    ps = &s;
    //insert code here
    // cout << fun(" World");
    // cout << fun(*ps);
    // cout << fun("Hello");
    cout << fun("Hello", " World");
    return 0;
}

string fun(string s1, string s2)
{
    return s1+s2;
}