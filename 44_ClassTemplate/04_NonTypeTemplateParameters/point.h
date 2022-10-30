#include <iostream>

// struct Point{
//     friend std::ostream& operator<<(std::ostream& out, const Point& operand);
//     double x{0};
//     double y{0};
//     Point()=default;
//     Point(double a, double b) : x(a), y(b){}
// };

// inline std::ostream& operator<<(std::ostream& out, const Point& operand){
//     out << "Point [ x : " << operand.x << ", y : " << operand.y << " ]";
//     return out;
// }

//New assignment
template<typename T, T threashold>
struct Point{
    //friend std::ostream& operator<<(std::ostream& out, const Point& operand);     
public:
    Point(T x, T y);
    ~Point()=default;
    T m_x;
    T m_y;
};

template <typename T, T threashold>
Point<T, threashold>::Point(T x, T y)
    : m_x(x), m_y(y){}

// inline std::ostream& operator<<(std::ostream& out, const Point<T, threashold>& operand){
//     out << "Point [ x : " << operand.m_x << ", y : " << operand.m_y << " ]";
//     return out;
// }