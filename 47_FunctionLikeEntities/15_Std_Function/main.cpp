/* 501 */

#include <iostream>
using namespace std;
#include <functional>
#include "boxcontainer.h"
#include <string>

// Function pointer
char encrypt(const char& param){
    return static_cast<char>(param+3);
};

// Functor 
class Decrypt{
public:
    char operator()(const char& param){
        return static_cast<char> (param-3);
    }
};

/* Modifying a BoxContainer of strings */
BoxContainer<std::string>& modify(BoxContainer<std::string>& sentence,
    std::function<char(const char&)> modifier){
        for (size_t i = 0; i < sentence.size(); i++)
        {
            /* code */
            for (size_t j = 0; j < sentence.get_item(i).size(); j++)
            {
                /* code */
                sentence.get_item(i)[j]=modifier(sentence.get_item(i)[j]);
            }
        }
    return sentence;
}

/* get best function */
std::string get_best(const BoxContainer<std::string>& sentence,
    std::function<bool(const std::string& left, const std::string& right)> comparator){
        std::string best = sentence.get_item(0);
        for (size_t i = 0; i < sentence.size(); i++)
        {
            /* code */
            if(comparator(best, sentence.get_item(i))){
                best=sentence.get_item(i);
            }
        }
    return best;
}


int main(){
    
    /* code */
    auto decrypt = [](const char& param){
        return static_cast<char>(param-3);
    };

    BoxContainer<std::function<char(const char&)>> func_entities;
    func_entities.add(encrypt);
    func_entities.add(decrypt);
    func_entities.add([](const char& param){
        return static_cast<char>(param+3);
    });
    
    for (size_t i = 0; i < func_entities.size(); i++)
    {
        /* code */
        std::cout << "result " << i << ". D transformed becomes : "
                  << func_entities.get_item(i)('D') << std::endl;
    }

    //std::function<char(const char&)> my_modifier;

    // // Function pointer
    // my_modifier = encrypt;
    // std::cout << "A encrypted becomes: " << my_modifier('A') << std::endl;

    // // Functor
    // Decrypt decrypt_func;
    // my_modifier=decrypt_func;
    // std::cout << "D decrypted becomes: " << my_modifier('D') << std::endl;

    // // Lambda function
    // my_modifier = [](const char& param){
    //     return static_cast<char>(param+3);
    // };
    
    // std::cout << "A encrypted becomes: " << my_modifier('A') << std::endl;
    
    return 0;
}