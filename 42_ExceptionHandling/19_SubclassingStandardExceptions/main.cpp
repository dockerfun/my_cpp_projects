#include <iostream>
#include <string>

class DivideByZeroException: public std::exception{
public:
    DivideByZeroException(int a, int b) noexcept: std::exception(), m_a(a), m_b(b){}
    virtual const char* what() const noexcept override{
        return (std::string("Divide by zero detected, dividing ") + std::to_string(m_a) + std::string(" by ") + std::to_string(m_b)).c_str();
    }

    int get_a() const{
        return m_a;
    }
    int get_b() const{
        return m_b;
    }
private:
    int m_a{};
    int m_b{};
};

int divide(int a, int b){
    if(b==0)
        throw DivideByZeroException(a, b);
    return a/b;
}

int main(){
    
    /* code */
    const int a{1};
    const int b{0};

    try{
        int result = divide(a,b);
    }catch(std::exception& ex){
        //std::cout << "Exception: " << ex.what() << std::endl;

        /**
         * We know taht the thrown exception contains a DivideByZeroException
         * part so we can downcast safely and call non virtual funtions
        */
        // DivideByZeroException *d_z = dynamic_cast<DivideByZeroException*>(&ex);
        // if(d_z){
        //     std::cout << "Dividing " << d_z->get_a() << " by " << d_z->get_b() << std::endl;
        // }
        std::cout << "Exception: " << ex.what() << std::endl;
    }
    
    return 0;
}