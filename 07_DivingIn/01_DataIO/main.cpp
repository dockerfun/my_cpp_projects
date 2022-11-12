#include <iostream>
using namespace std;

int main(){
    
    /* code */
    std::string fullname;
    int age;

    std::getline(std::cin, fullname);
    
    std::cin >> age;

    std::cout << "Hello " << fullname << ", your age is " 
    << age << std::endl;
    
    return 0;
}