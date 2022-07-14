// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_WHATEVER_HPP_
#define EX00_INCLUDES_WHATEVER_HPP_

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
    return(y <= x ? y : x);
}

template<typename T>
T& max(T& x, T& y) {
    return(y >= x ? y : x);
}

#endif  // EX00_INCLUDES_WHATEVER_HPP_
