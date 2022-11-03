/* Function pointers */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

double add_numbers(double a, double b){
    return a+b;
}

/* Using references */
char encrypt(const char& param){
    return static_cast<char>(param+3);
}

char decrypt(const char& param){
    return static_cast<char>(param-3);
}

/* Using pointers */
char encrypt(const char *param){
    return static_cast<char>((*param)+3);
}

char decrypt(const char *param){
    return static_cast<char>((*param)-3);
}

std::string& modify_ref(std::string& str_param, char(*modifier)(const char&)){
    for(size_t i{0};i<str_param.size();++i){
        str_param[i] = modifier(str_param[i]); // Calling the callback method
    }
    return str_param;
}

std::string& modify_ptr(std::string& str_param, char(*modifier)(const char*)){
    for(size_t i{0};i<str_param.size();++i){
        str_param[i] = modifier(&str_param[i]); // Calling the callback method
    }
    return str_param;
}

int main(){
    
    /* code */
    std::string str("Hello World");

    /* Using references */
    
        // Encrypted string
        std::string encrypted_str_ref = modify_ref(str, &encrypt);
        std::cout << "Encrypted string ref: " << encrypted_str_ref << std::endl;

        // Decrypted string
        std::string decrypted_str_ref = modify_ref(str, &decrypt);
        std::cout << "Decrypted string ref: " <<  decrypted_str_ref << std::endl;

    /* Using pointers */

        // Encrypted string
        std::string encrypted_str_ptr = modify_ptr(str, &encrypt);
        std::cout << "Encrypted string ptr: " << encrypted_str_ptr << std::endl;

        // Decrypted string
        std::string decrypted_str_ptr = modify_ptr(str, &decrypt);
        std::cout << "Decrypted string ptr: " <<  decrypted_str_ptr << std::endl;
    
    return 0;
}