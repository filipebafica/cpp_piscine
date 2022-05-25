// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Fixed.hpp"

const int Fixed::_numFractionalBits = 8;

Fixed::Fixed(void) : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = fixed.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}
