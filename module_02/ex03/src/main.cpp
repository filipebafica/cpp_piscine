// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Point.hpp"
#include "../includes/Fixed.hpp"


int main(void) {
    // Fixed a;
    // Fixed const b(Fixed(5.05f) * Fixed(2));
    Point a(1.0, 1.0);
    Point b(2.0, 3.0);

    a = b;
    std::cout << a.getX() << std::endl;
    std::cout << a.getY() << std::endl;

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max(a, b) << std::endl;

    return (0);
}
