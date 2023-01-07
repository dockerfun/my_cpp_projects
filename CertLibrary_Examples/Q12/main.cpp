#include <iostream>
#include <exception>
using namespace std;

class myClass : public exception
{
    virtual const char* what() const throw()
    {
        return "My exception.";
    }
} obj;

int main () {
    try
    {
        throw obj;
    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }
    return 0;
}