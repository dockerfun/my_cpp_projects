#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    
    std::cout << "Number1" << std::endl;
    std::cout << "Number2" << std::endl;
    std::cout << "Number3" << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        cout << "Teszt"+to_string(i) << endl;
    }
    
    return 0;
}