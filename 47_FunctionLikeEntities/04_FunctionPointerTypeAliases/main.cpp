#include <iostream>
#include "boxcontainer.h"

/* Using references */
char encrypt(const char& param){
    return static_cast<char>(param+3);
}

char decrypt(const char& param){
    return static_cast<char>(param-3);
}

std::string modify_ref(std::string& str, char(*method)(const char&)){
    for(size_t i{0};i<str.size();++i){
        str[i]=method(str[i]);
    }
    return str;
}

BoxContainer<std::string>& modify_bc(BoxContainer<std::string>& bc, char(*modifier)(const char&)){
    for(size_t i{0};i<bc.size();++i){
        for(size_t j{0};j<bc.get_item(i).size();++j){
            bc.get_item(i)[j]=modifier(bc.get_item(i)[j]);
        }
    }
    return bc;
}

/* Type aliases with keyword using - new solution */
using str_comparator = bool(*)(const std::string& str1, const std::string& str2);
std::string get_best(const BoxContainer<std::string>& sentence,
    str_comparator comparator){
      std::string best = sentence.get_item(0);
      for(size_t i{0};i<sentence.size();++i){
        if(comparator(sentence.get_item(i), best)){
            best = sentence.get_item(i);
        }
      }  
    return best;
}

//old solution
// std::string get_best(const BoxContainer<std::string>& sentence,
//     bool(*comparator)(const std::string& str1, const std::string& str2)){
//       std::string best = sentence.get_item(0);
//       for(size_t i{0};i<sentence.size();++i){
//         if(comparator(sentence.get_item(i), best)){
//             best = sentence.get_item(i);
//         }
//       }  
//     return best;
// }

//the definition of best
bool larger_in_size(const std::string& str1, const std::string& str2){
    if(str1.size() > str2.size())
        return true;
    else 
        return false;
}

bool greater_lexocographically(const std::string& str1, const std::string& str2){
    return (str1>str2);
}

int main(){
    
    /* code */

    // std::string str("Hello World");

    /* Using references */
        
            // // Encrypted string
            // std::string encrypted_str_ref = modify_ref(str, &encrypt);
            // std::cout << "Encrypted string ref: " << encrypted_str_ref << std::endl;

            // // Decrypted string
            // std::string decrypted_str_ref = modify_ref(str, &decrypt);
            // std::cout << "Decrypted string ref: " <<  decrypted_str_ref << std::endl;

    BoxContainer<std::string> box;
    box.add("Hello_");
    box.add("World");

    //std::cout << box << std::endl;

    std::cout << "-----------" << std::endl;

    BoxContainer<std::string> enc_sentence = modify_bc(box, &encrypt);
    std::cout << "Encrypted BoxContainer: " << enc_sentence << std::endl;

    BoxContainer<std::string> dec_sentence = modify_bc(box, &decrypt);
    std::cout << "Decrypted BoxContainer: " << dec_sentence << std::endl;

    std::cout << "get_best function call: " << std::endl;
    std::cout << "larger_in_size: " << get_best(box, larger_in_size) << std::endl;
    std::cout << "greater_lexocographically: " << get_best(box, greater_lexocographically) << std::endl;
    
    std::cout << "-------------------" << std::endl;

    // Declaring another callback through out type alias
    str_comparator my_comparator{larger_in_size};

    std::cout << "best through my comparator : " 
        << get_best(box, my_comparator) << std::endl;

    std::cout << "End" << std::endl;

    return 0;
}