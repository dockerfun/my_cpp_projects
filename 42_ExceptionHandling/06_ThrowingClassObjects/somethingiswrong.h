#ifndef SOMETHINGISWRONG_H
#define SOMETHINGISWRONG_H

#include <string>
#include <string_view>

class SomethingIsWrong{
public:
    SomethingIsWrong(const std::string s) : m_message(s){
    }
    //Copy constructor - need to have in order to be thrown as an Exception
    SomethingIsWrong(const SomethingIsWrong& source);

    // Destructor
    ~SomethingIsWrong();
    std::string_view what() const;
private:
    std::string m_message;
};

#endif //SOMETHINGISWRONG_H