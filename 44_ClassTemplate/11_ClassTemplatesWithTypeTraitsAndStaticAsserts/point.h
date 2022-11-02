#include <iostream>

//New assignment
template<typename T>
class Point{
    static_assert(std::is_arithmetic_v<T>,
    "Coordinates of Point can only be numbers");
public:
    Point<T>()=default;
    Point<T>(T x, T y)
        : m_x(x), m_y(y){}
    friend std::ostream& operator<<(std::ostream& out, const Point<T>& operand){
        out <<"Point [ x : " << operand.m_x
            << ", y : " << operand.m_y 
            << "]";
        return out;
    }
private:
    T m_x;
    T m_y;
};