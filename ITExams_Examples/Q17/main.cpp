#include <iostream>
#include <string>
using namespace std;

class First
{
    string *s;
public:
    First() { s = new string("Text");}
    ~First() { delete s;}
    void Print(){ cout<<*s;}
};

int main()
{
    First FirstObject;
    FirstObject.Print();
    FirstObject.~First();
    
    cout << endl;
    cout << "end" << endl;
}