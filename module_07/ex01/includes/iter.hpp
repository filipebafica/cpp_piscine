// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_ITER_HPP_
#define EX01_INCLUDES_ITER_HPP_

#include <iostream>

template<typename T>
void iter(T *arrAddr, int arrLen, void (*func)(T& arrElement)) {
    for (int i = 0; i < arrLen; ++i) {
        func(arrAddr[i]);
    }
}

template<typename T>
void iter(T const *arrAddr, int arrLen, void (*func)(T const& arrElement)) {
    for (int i = 0; i < arrLen; ++i) {
        func(arrAddr[i]);
    }
}

template<typename T>
void printArrElement(T const& arrElement) {
    std::cout << arrElement << std::endl;
}

template<typename T>
void addOne(T arrElement) {
    arrElement += 1;
}

#endif  // EX01_INCLUDES_ITER_HPP_
