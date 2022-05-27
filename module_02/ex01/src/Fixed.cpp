// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <math.h>
#include <iostream>
#include "../includes/Fixed.hpp"

const int Fixed::_numFractionalBits = 8;

Fixed::Fixed(void) : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _rawBits(value) {
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = value << Fixed::_numFractionalBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(value * pow(2, Fixed::_numFractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(Fixed const &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}

float Fixed::toFloat(void) const {
    return(this->_rawBits / pow(2, Fixed::_numFractionalBits));
}

int Fixed::toInt(void) const {
    return(this->_rawBits >> Fixed::_numFractionalBits);
}

std::ostream& operator<<(std::ostream& o, Fixed const& fixed) {
    o << fixed.toFloat();
    return (o);
}
