#ifndef SOMETHINGISWRONG_H
#define SOMETHINGISWRONG_H

#include <string>
#include <string_view>

class SomethingIsWrong{
public:
    SomethingIsWrong(const std::string& s) : m_message(s){}
    SomethingIsWrong(const SomethingIsWrong& source);
    ~SomethingIsWrong();
    const std::string what() const;
protected:
    std::string m_message;
};

#endif //SOMETHINGISWRONG_H