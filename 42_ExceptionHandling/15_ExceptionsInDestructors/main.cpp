#include <iostream>
using namespace std;

class Item{
public:
    Item()=default;
    ~Item() noexcept(false){ // in C++11 destructors default to 'noexcept'
        throw;
    }
};

int main(){
    
    /* code */
    try{
        Item item;
    }
    catch(int ex){
        std::cout <<"Catching rethrown exception in main" << std::endl;
    }
    return 0;
}