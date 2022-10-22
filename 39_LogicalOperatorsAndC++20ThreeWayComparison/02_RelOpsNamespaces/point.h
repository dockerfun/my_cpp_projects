#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <utility>

class Point {
    friend std::ostream& operator<< (std::ostream& out, const Point& p);
    friend bool operator< (const Point& left, const Point& right);
    friend bool operator== (const Point& left, const Point& right);
    public:
        Point()=default;
        Point(double x, double y)
            : m_x(x), m_y(y){}
        ~Point()=default;
        void print_info() const {
            std::cout << "Point [ x : " << m_x << ", y : " << m_y << " ]" << std::endl;
        }
        
    private:
        double length() const; //function to calculate distance from the Point(0,0)
    private:
        double m_x{};
        double m_y{};
};

inline std::ostream& operator<< (std::ostream &out, const Point& p){
    out << "Point [ x : " << p.m_x << ", y : " << p.m_y <<
    " , length: " << p.length() << " ]";
    return out;
}

inline bool operator< (const Point& left, const Point& right){
    return (left.length() < right.length());
}
inline bool operator== (const Point& left, const Point& right){
    return (left.length() == right.length());
}

#endif //POINT_H