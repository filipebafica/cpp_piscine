// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_POINT_HPP_
#define EX03_INCLUDES_POINT_HPP_

#include "./Fixed.hpp"

class Point {
 public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point& p);
    Point& operator=(const Point& p);
    ~Point(void);
    Fixed getX(void) const;
    Fixed getY(void) const;
 private:
    Fixed const x, y;
};

#endif  // EX03_INCLUDES_POINT_HPP_
