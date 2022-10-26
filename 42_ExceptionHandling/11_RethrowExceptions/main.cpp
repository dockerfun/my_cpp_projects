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
            try{
                do_something(i);
            }catch(SomethingIsWrong& ex_inner){
                if(typeid(ex_inner) == typeid(Warning)){
                    std::cout << typeid(ex_inner).name() << " -Inner catch block, Exception cought : " << ex_inner.what() << std::endl;
                }else{
                    throw;
                    //throw ex_inner; //this will do a copy and there will be a slicing!
                }
            }
        }catch(SomethingIsWrong& ex_outer){
            std::cout << typeid(ex_outer).name() << " -Outer catch block, Exception cought : " << ex_outer.what() << std::endl;
        }
    } // end of for loop
    return 0;
}