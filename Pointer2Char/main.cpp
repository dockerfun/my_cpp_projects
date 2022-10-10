#include <iostream>

using namespace std;


int main(){
    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    std::cout << "Value : " << *p_char_var << std::endl;

    char char_var1 {'c'};
    p_char_var = &char_var1;

    std::cout << "New value: " << *p_char_var << std::endl;

    const char * p_message { "Hello world!" }; //not allowed to modify a string

    std::cout << "string literal: " << p_message << std::endl;

    std::cout << "string literal with dereference: " << *p_message << std::endl;

    //Allow users to modify the string
    char message[] {"Hello world!"}; //allowed to modify a string
    message[0] = 'B';

    std::cout << message << std::endl;

    return 0;
}