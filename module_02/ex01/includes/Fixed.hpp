// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_FIXED_HPP_
#define EX01_INCLUDES_FIXED_HPP_

#include <iostream>

class Fixed {
 public:
    Fixed(void);
    explicit Fixed(const int value);
    explicit Fixed(const float value);
    Fixed(const Fixed &fixed);
    Fixed& operator=(const Fixed &fixed);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int   toInt(void) const;

 private:
    int _rawBits;
    static const int _numFractionalBits;
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif  // EX01_INCLUDES_FIXED_HPP_
