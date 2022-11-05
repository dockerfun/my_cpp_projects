/**
 * FUNCTOR: 
 *  - Class objects that can be called like ordinary functions
 *  - We set them up by overloading the () operator for our class
*/

#include <iostream>
#include "boxcontainer.h"
#include <functional>
using namespace std;

std::string& modify_str(std::string& str_param, 
                    char(*modifier)(const char&)){
    for (size_t i = 0; i < str_param.size(); i++)
    {
        /* code */
        str_param[i] = modifier(str_param[i]);// Calling the callback
    }
    return str_param;
}

// Modifying BoxContainer of strings
BoxContainer<std::string>& modify(BoxContainer<std::string>& sentence, 
                    char(*modifier)(const char&)){
    for (size_t i = 0; i < sentence.size(); i++)
    {
        /* code */
        for (size_t j = 0; j < sentence.get_item(i).size(); j++)
        {
            /* code */
            sentence.get_item(i)[j] = modifier(sentence.get_item(i)[j]);
        }
    }
    return sentence;
}

std::string get_best(const BoxContainer<std::string>& sentence, bool (*comparator)(const std::string&, const std::string&)){
    std::string best = sentence.get_item(0);
    for (size_t i = 0; i < sentence.size(); i++)
    {
        /* code */
        if(comparator(sentence.get_item(i), best)){
            best = sentence.get_item(i);
        }
    }
    return best;
}

int main(){
    
    /* code */
    std::string str {"Hello"};

    auto encrypt = [](const char& param){
        return static_cast<char>(param-3);
    };
    
    auto decrypt = [](const char& param){
        return static_cast<char>(param+3);
    };

    // Modify through callbacks
    std::cout << std::endl;
    std::cout << "Initial : " << str << std::endl;
    std::cout << "Encrypted: " << modify_str(str, encrypt) << std::endl;
    std::cout << "Decrypted: " << modify_str(str, decrypt) << std::endl;

    // Using lambdas in place
    std::cout << std::endl;
    std::cout << "Initial: " << str << std::endl;

    // // Anonymous lambda function calls
    std::cout << "Encrypted: " << modify_str(str, [](const char& param){
        return static_cast<char>(param+3);
    }) << std::endl;

    std::cout << "Decrypted: " << modify_str(str, [](const char& param){
        return static_cast<char>(param-3);
    }) << std::endl;

    // std::string's in a BoxContainer
    std::cout << std::endl;
    std::cout << "strings stored in BoxContainer : " << std::endl;
    BoxContainer<std::string> quote;
    quote.add("The");
    quote.add("sky");
    quote.add("is");
    quote.add("blue");

    std::cout << "Initial : " << quote << std::endl;
    std::cout << "Encrypted: " << modify(quote, encrypt) << std::endl;
    std::cout << "Decrypted: " << modify(quote, decrypt) << std::endl;

    std::cout << std::endl;

    // Callback functions - getting the best
    auto larger_in_size = [] (const std::string& str1, const std::string& str2){
        if(str1.size()>str2.size()){
            return true;
        }else{
            return false;
        }
    };

    auto greater_lexicographicaly = [] (const std::string& str1, const std::string& str2){
        return (str1>str2);
    };

    std::cout << std::endl;
    std::cout << "Getting the best: " << std::endl;
    std::cout <<"larger in size: " << get_best(quote, larger_in_size) << std::endl;
    
    std::cout << "greater lexocographicaly: " 
    << get_best(quote, greater_lexicographicaly) << std::endl;

    std::cout << "end" << std::endl;

    return 0;
}