#include <iostream>

struct Point{
    friend std::ostream& operator<<(std::ostream& out, const Point& operand);
    double x{0};
    double y{0};
    Point()=default;
    Point(double a, double b) : x(a), y(b){}
};

inline std::ostream& operator<<(std::ostream& out, const Point& operand){
    out << "Point [ x : " << operand.x << ", y : " << operand.y << " ]";
    return out;
}