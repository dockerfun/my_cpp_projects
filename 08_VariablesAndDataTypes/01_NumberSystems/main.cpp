#include <iostream>
using namespace std;

int main(){
    
    /* code */
    int number1 = 15; //decimal 
    int number2 = 017;//octal
    int number3 = 0x0f;//hexadecimal
    int number4 = 0b00001111; //binary - C++14

    std::cout << "Hello World!" << std::endl;

    std::cout << "Number1 is : " << number1 << std::endl;
    std::cout << "Number2 is : " << number2 << std::endl;
    std::cout << "Number3 is : " << number3 << std::endl;
    std::cout << "Number4 is : " << number4 << std::endl;
    
    
    return 0;
}