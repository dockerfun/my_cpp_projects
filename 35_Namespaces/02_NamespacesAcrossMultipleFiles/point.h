#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

namespace Geom {
    
    class Point {
    public:
        Point();
        Point(double x, double y);
        void print_info() const {
            cout << "Point [ x : " << m_x << ", y : " << m_y << " ]" << endl;
        }
        ~Point();
    private:
        double m_x;
        double m_y;
    };

}

#endif