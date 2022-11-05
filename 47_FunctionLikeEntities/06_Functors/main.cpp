/**
 * FUNCTOR: 
 *  - Class objects that can be called like ordinary functions
 *  - We set them up by overloading the () operator for our class
*/

#include <iostream>
using namespace std;

//using functors
class Encrypt{
    public:
        char operator()(const char& param){
            return static_cast<char> (param+3);
        }
};

class Decrypt{
    public:
        char operator()(const char& param){
            return static_cast<char> (param-3);
        }
};

int main(){
    
    /* code */
    Encrypt encrypt;
    Decrypt decrypt;

    std::cout << "encrypt : " << encrypt('A') << std::endl;
    std::cout << "decrypt : " << decrypt('D') << std::endl;
    
    return 0;
}