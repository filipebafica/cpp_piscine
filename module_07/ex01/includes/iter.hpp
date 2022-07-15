// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_HEADERS_HPP_
#define EX00_INCLUDES_HEADERS_HPP_

#include <iostream>

template<typename T>
void iter(T* arrAddr, int arrLen, void (*func)(T arrElement)) {
    for (int i = 0; i < arrLen; ++i) {
        func(arrAddr[i]);
    }
}

template<typename T>
void printArrElement(T arrElement) {
    std::cout << arrElement << std::endl;
}

#endif  // EX00_INCLUDES_HEADERS_HPP_
