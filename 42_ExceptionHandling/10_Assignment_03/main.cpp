#include <iostream>
 
#include <string>
class SomethingIsWrong{
public : 
    SomethingIsWrong(const std::string& s) : m_message(s){}
     virtual ~SomethingIsWrong(){}
    virtual std::string what()const{return m_message;}
protected : 
    std::string m_message;
};
 
class Warning : public SomethingIsWrong{
    public : 
    Warning(const std::string& s) : SomethingIsWrong(s){}
    virtual std::string what()const override{return m_message + " Yellow";}
};
 
class SmallError : public Warning{
    public : 
    SmallError(const std::string& s) : Warning(s){}
    virtual std::string what()const override {return m_message + " Orange";}
};
 
class CriticalError : public SmallError{
    public : 
    CriticalError(const std::string& s) : SmallError(s){}
    virtual std::string what()const override {return m_message + " Red";}
};
 
int main()
{
     try{
         throw SmallError("He didn't shave the beard");
      }catch(const SomethingIsWrong& ex){ //Polymorphic behavior
          std::cout << "SomethingIsWrong Exception cought : " << ex.what() << std::endl;
      }
    //   catch(const SomethingIsWrong ex){ //Non-Polymorphic behavior
    //       std::cout << "SomethingIsWrong Exception cought : " << ex.what() << std::endl;
    //   }   
    return 0;
}