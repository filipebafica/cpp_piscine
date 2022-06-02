// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/headers.hpp"
#include "../includes/Point.hpp"
#include "../includes/Fixed.hpp"

int main(void) {
    Point a(0, 0);
    Point b(20, 0);
    Point c(10, 30);

    if (bsp(a, b, c, Point(30, 10)))
        std::cout << "Inside" << std::endl;
    else
        std::cout << "Outside" << std::endl;
    if (bsp(a, b, c, Point(10, 15)))
        std::cout << "Inside" << std::endl;
    else
        std::cout << "Outside" << std::endl;
    return (0);
}
