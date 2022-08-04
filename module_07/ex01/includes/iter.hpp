// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_ITER_HPP_
#define EX01_INCLUDES_ITER_HPP_

#include <iostream>

template<typename T>
void iter(T *arrAddr, int arrLen, void (*func)(T const & arrElement)) {
    for (int i = 0; i < arrLen; ++i) {
        func(arrAddr[i]);
    }
}

template<typename T>
void printArrElement(T& arrElement) {
    std::cout << arrElement << std::endl;
}

#endif  // EX01_INCLUDES_ITER_HPP_
