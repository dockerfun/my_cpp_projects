/**
 * Exception
 * 
 * - logic_error: 
 *      - invalid_argument
 *      - length_error
 *      - out_of_range
 * 
 * - runtime_error:
 *      - overflow_error
 *      - underflow_error
 * 
 * - others
 *      - bad_alloc
 *      - bad_cast
*/
#include <iostream>
using namespace std;

class Animal{
public:
    Animal()=default;
    Animal(const std::string n) : m_name(n){}
    Animal(const Animal& animal){};
    virtual ~Animal(){}
    virtual void breathe()const{}
protected:
    std::string m_name;
};

class Feline : public Animal{
public:
    Feline(const std::string n):Animal(n){};
private:
    int speed;
};

int main(){
    
    /* code */
    Animal animal1;

    try{
        Feline feline{dynamic_cast<Feline&>(animal1)};
    }
    catch(std::exception& ex){
        std::cout << "Something is wrong: " << ex.what() << std::endl; //bad_cast exception according to cppreference
    }
    return 0;
}