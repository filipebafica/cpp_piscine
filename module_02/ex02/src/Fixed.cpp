// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <cmath>
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

Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = fixed.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed& fixed) {
    if (this->_rawBits > fixed._rawBits)
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed& fixed) {
    if (this->_rawBits < fixed._rawBits)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& fixed) {
    if (this->_rawBits >= fixed._rawBits)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& fixed) {
    if (this->_rawBits <= fixed._rawBits)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& fixed) {
    if (this->_rawBits == fixed._rawBits)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& fixed) {
    if (this->_rawBits != fixed._rawBits)
        return (true);
    return (false);
}

Fixed Fixed::operator+(const Fixed& fixed) {
    Fixed newFixed;
    newFixed._rawBits = (this->_rawBits + fixed.getRawBits());
    return (newFixed);
}

Fixed Fixed::operator-(const Fixed& fixed) {
    Fixed newFixed;
    newFixed._rawBits = (this->_rawBits - fixed.getRawBits());
    return (newFixed);
}

Fixed Fixed::operator*(const Fixed& fixed) {
    Fixed newFixed;
    float tmp;

    tmp = (this->toFloat() * fixed.toFloat());
    newFixed._rawBits = roundf(tmp * pow(2, Fixed::_numFractionalBits));
    return (newFixed);
}

Fixed Fixed::operator/(const Fixed& fixed) {
    Fixed newFixed;
    float tmp;

    tmp = (this->toFloat() / fixed.toFloat());
    newFixed._rawBits = roundf(tmp * pow(2, Fixed::_numFractionalBits));
    return (newFixed);
}

Fixed Fixed::operator++(void) {
    this->_rawBits++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed oldFixed;

    oldFixed = *this;
    this->_rawBits++;
    return (oldFixed);
}

Fixed Fixed::operator--(void) {
    this->_rawBits--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed oldFixed;

    oldFixed = *this;
    this->_rawBits--;
    return (oldFixed);
}

Fixed& Fixed::min(Fixed& fixedOne, Fixed& fixedTwo) {
    if (fixedOne < fixedTwo)
        return (fixedOne);
    return (fixedTwo);
}

Fixed& Fixed::min(const Fixed& fixedOne, const Fixed& fixedTwo) {
    if (static_cast<Fixed>(fixedOne) < static_cast<Fixed>(fixedTwo))
        return (const_cast<Fixed&>(fixedOne));
    return (const_cast<Fixed&>(fixedTwo));
}

Fixed& Fixed::max(Fixed& fixedOne, Fixed& fixedTwo) {
    if (fixedOne > fixedTwo)
        return (fixedOne);
    return (fixedTwo);
}

Fixed& Fixed::max(const Fixed& fixedOne, const Fixed& fixedTwo) {
    if (static_cast<Fixed>(fixedOne) > static_cast<Fixed>(fixedTwo))
        return (const_cast<Fixed&>(fixedOne));
    return (const_cast<Fixed&>(fixedTwo));
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

std::ostream& operator<<(std::ostream& o, const Fixed& fixed) {
    o << fixed.toFloat();
    return (o);
}
