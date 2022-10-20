#ifndef POINT_H
#define POINT_H

#include <iostream>

namespace Geom {
    class Point {
    public: 
        Point(double x, double y);
        void print_info() const {
            std::cout << "[ x : " << m_x << ", y : " << m_y << std::endl; 
        }
    private:
        double m_x;
        double m_y;
    };
}
#endif //POINT_H