#ifndef MYTEMPLATE_H
#define MYTEMPLATE_H

template<typename T>
class MyTemplate{
public:
    MyTemplate()=default;
    MyTemplate(T a, T b) : m_a(a), m_b(b){} 
    T max(){
        return m_a>m_b?m_a:m_b;
    }
private:
    int m_a{0};
    int m_b{0};
};

#endif