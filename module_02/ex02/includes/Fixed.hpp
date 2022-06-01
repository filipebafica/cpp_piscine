// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_FIXED_HPP_
#define EX02_INCLUDES_FIXED_HPP_

#include <iostream>

class Fixed {
 public:
    Fixed(void);
    explicit Fixed(const int value);
    explicit Fixed(const float value);
    Fixed(const Fixed& fixed);
    Fixed& operator=(const Fixed& fixed);
    bool operator>(const Fixed& fixed);
    bool operator<(const Fixed& fixed);
    bool operator>=(const Fixed& fixed);
    bool operator<=(const Fixed& fixed);
    bool operator==(const Fixed& fixed);
    bool operator!=(const Fixed& fixed);
    Fixed operator+(const Fixed& fixed);
    Fixed operator-(const Fixed& fixed);
    Fixed operator*(const Fixed& fixed);
    Fixed operator/(const Fixed& fixed);
    Fixed operator++(void);
    Fixed operator++(int);
    Fixed operator--(void);
    Fixed operator--(int);
    static Fixed& min(Fixed& fixedOne, Fixed& fixedTwo);
    static Fixed& min(const Fixed& fixedOne, const Fixed& fixedTwo);
    static Fixed& max(Fixed& fixedOne, Fixed& fixedTwo);
    static Fixed& max(const Fixed& fixedOne, const Fixed& fixedTwo);

    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int   toInt(void) const;

 private:
    int _rawBits;
    static const int _numFractionalBits;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif  // EX02_INCLUDES_FIXED_HPP_
