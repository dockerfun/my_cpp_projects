#ifndef MYTYPE_H
#define MYTYPE_H

template <typename T, typename P>
auto add(T a, P b)->decltype(a+b);


#endif