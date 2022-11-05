/**
 * FUNCTOR: 
 *  - Class objects that can be called like ordinary functions
 *  - We set them up by overloading the () operator for our class
*/

#include <iostream>
#include "encrypt.h"
#include "decrypt.h"
using namespace std;

char encrypt(const char& param){
    return static_cast<char>(param-3);
}

char decrypt(const char& param){
    return static_cast<char>(param+3);
}

// Modify
template<typename T>
using Modifier = char(*)(const T&);

// Function template
template <typename Modifier>
std::string& modify(std::string& str_param, Modifier modifier){
    for(size_t i{0};i<str_param.size();++i){
        str_param[i]=modifier(str_param[i]);
    }
    return str_param;
}

int main(){
    
    /* code */
    std::string str("initial string example");
    Encrypt encrypt_functor;
    Decrypt decrypt_functor;

    std::cout << std::endl;
    std::cout << "Modifying string through function pointers: " << std::endl;
    std::cout << "Initial: " << str << std::endl;
    std::cout << "Encrypted: " << modify(str, encrypt) << std::endl;
    std::cout << "Decrypted: " << modify(str, decrypt) << std::endl;
    
    std::cout << std::endl;
    std::cout << "Modifying string through functors: " << std::endl;
    std::cout << "Initial: " << str << std::endl;
    std::cout << "Encrypted: " << modify(str, encrypt_functor) << std::endl;
    std::cout << "Decrypted: " << modify(str, decrypt_functor) << std::endl;

    return 0;
}