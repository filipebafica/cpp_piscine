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

#endif  // EX00_INCLUDES_HEADERS_HPP_
