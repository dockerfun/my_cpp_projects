#ifndef LINE_H
#define LINE_H

#include "point.h"

namespace Geom {
    class Line {
        public:
            Line(const Point& start, const Point& end);
    private:
        Point m_start;
        Point m_end;
    };
}

#endif //LINE_H