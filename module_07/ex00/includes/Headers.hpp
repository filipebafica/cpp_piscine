// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_HEADERS_HPP_
#define EX00_INCLUDES_HEADERS_HPP_

#include <iostream>

template<typename T>
void swap(T& x, T& y) {
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template<typename T>
T& min(T& x, T& y) {
    if (x == y)
        return (y);
    else if (x < y)
        return (x);
    else
        return (y);
}

template<typename T>
T& max(T& x, T& y) {
    if (x == y)
        return (y);
    else if (x > y)
        return (x);
    else
        return (y);
}

#endif  // EX00_INCLUDES_HEADERS_HPP_
