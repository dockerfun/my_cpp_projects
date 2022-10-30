#ifndef MAP_H
#define MAP_H

#include <string>
#include <string_view>
#define __P template <typename T, typename P>

__P
class Map{
public:
    Map(T key, P value)
        : m_key(key), m_value(value){}
    T m_key{};
    P m_value{};
};

#endif