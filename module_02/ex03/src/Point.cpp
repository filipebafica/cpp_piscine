// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/Point.hpp"
#include "../includes/Fixed.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& p) {
    *this = p;
}

Point::~Point(void) {}

Fixed Point::getX(void) const {
    return (this->x);
}

Fixed Point::getY(void) const {
    return (this->y);
}

Point& Point::operator=(const Point& p) {
    const_cast<Fixed&>(this->x) = p.getX();
    const_cast<Fixed&>(this->y) = p.getY();

    return (*this);
}
