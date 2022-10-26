#include <iostream>
 
#include <string>
 
class SomethingIsWrong{
public : 
    SomethingIsWrong(const std::string& s) : m_message(s){}
    virtual ~SomethingIsWrong(){}
    virtual const std::string what()const{return m_message;}
protected : 
    std::string m_message;
};
 
class Warning : public SomethingIsWrong{
    public : 
    Warning(const std::string& s) : SomethingIsWrong(s){}
    virtual const std::string what()const{return m_message + " Yellow";}
};
 
class SmallError : public Warning{
    public : 
    SmallError(const std::string& s) : Warning(s){}
    virtual const std::string what()const{return m_message + " Orange";}
 
};
 
class CriticalError : public SmallError{
    public : 
    CriticalError(const std::string& s) : SmallError(s){}
    virtual const std::string what()const{return m_message + " Red";}
 
};

void do_something(size_t i){
    if (i==2){
        throw CriticalError("i is 2");
    }
    if (i==3){
        throw SmallError("i is 3");
    }
    if (i==4){
        throw Warning("i is 4");
    }
    if (i==5){
        throw SomethingIsWrong("i is 5");
    }
    std::cout << "Doing something at iteration" << i << std::endl;
}

int main()
{
    std::cout << "Object Exception with Class Inheritance Hierarchies" << std::endl;

    for(size_t i{}; i<6; ++i){
        try{
            do_something(i);
        }catch(SomethingIsWrong& ex){
            std::cout << "SomethingIsWrong Exception cought : " << ex.what() << std::endl;
            //using typeid()
            //std::cout << std::endl << typeid(ex).name() << " Exception cought: " << ex.what() << std::endl;
            std::cout << std::endl;
        }
    }
    return 0;
}