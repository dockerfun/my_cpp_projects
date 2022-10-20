/**
 * Namespaces
 * 
 * A facility in the C++ programming language to avoid name conflicts
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    std::cout << "Hello World" << endl;

    string message{"HelloWorld"};
    cout << message << endl;
}