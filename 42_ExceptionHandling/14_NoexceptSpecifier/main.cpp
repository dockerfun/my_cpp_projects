#include <iostream>
using namespace std;

//2
class Item{
public:
    Item()=default;
    void do_something_in_class() const noexcept{ //noexcept method
        try{
            throw 1;
        }
        catch(int ex){
            std::cout << "Handling int exception in function do_something_in_class()" << std::endl;
            //throw; //Rethrowing in noexcept function/method will terminate program
        } 
    }
private:
    int m_member_var;
};

//1
 void some_function() noexcept{ //noexcept method
    try{
        throw 1;
    }
    catch(int ex){
        std::cout << "Handling int exception in free function some_function()" << std::endl;
        //throw; //Rethrowing in noexcept function/method will terminate program
    } 
}

int main(){
    
    /* code */
    try{
        //some_function();
        Item item;
        item.do_something_in_class();
    }
    catch(int ex){
        std::cout <<"Catching rethrown exception in main" << std::endl;
    }
    return 0;
}