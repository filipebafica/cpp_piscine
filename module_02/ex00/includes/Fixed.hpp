// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_FIXED_HPP_
#define EX00_INCLUDES_FIXED_HPP_

class Fixed {
 public:
    Fixed(void);
    Fixed(const Fixed &fixed);
    Fixed& operator=(const Fixed &fixed);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);

 private:
    int _fixedPointValue;
    static const int _numFractionalBits;
};

#endif  // EX00_INCLUDES_FIXED_HPP_
