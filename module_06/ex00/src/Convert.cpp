// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/Convert.hpp"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <iomanip>

Convert::Convert(void) : _input("") {
}

Convert::Convert(std::string literal) : _input(literal) {
}

Convert::Convert(const Convert& src) : _input("") {
    *this = src;
}

Convert& Convert::operator=(const Convert& rhs) {
    this->_input = rhs.getInput();
    return (*this);
}

Convert::~Convert(void) {
}

std::string Convert::getInput(void) const {
    return (this->_input);
}

bool Convert::isDoubleType(void) {
    std::string::iterator it;

    // checl if == Not a number
    if (this->_input == "nan")
        return (true);
    // check if there is only (digit) && ('.')
    for (it = this->_input.begin(); it != this->_input.end(); ++it) {
        if (!isdigit(*it) && *it != '.')
            return (false);
    }
    // check if there is more than ('.') charactere
    if (this->_input.find_first_of('.') != this->_input.find_last_of('.'))
        return (false);
    return (true);
}

bool Convert::isFloatType(void) {
    std::string::iterator it;

    // checl if == Not a number
    if (this->_input == "nan")
        return (true);
    // check if there is only (digit) && ('.') && (f)
    for (it = this->_input.begin(); it != this->_input.end(); ++it) {
        if (!isdigit(*it) && *it != '.' && *it != 'f')
            return (false);
    }
    // check if string ends with a f
    if (*(this->_input.end() - 1) != 'f')
        return (false);
    // check if there is more than ('.') charactere
    if (this->_input.find_first_of('.') != this->_input.find_last_of('.'))
        return (false);
    return (true);
}

bool Convert::isIntType(void) {
    std::string::iterator it;

    for (it = this->_input.begin(); it != this->_input.end(); ++it) {
        if (!isdigit(*it))
            return (false);
    }
    return (true);
}

bool Convert::isCharType(void) {
    std::string::iterator it;

    for (it = this->_input.begin(); it != this->_input.end(); ++it) {
        if (!isalpha(*it))
            return (false);
    }
    return (true);
}

char Convert::fromStringToChar(void) {
    return (*this->_input.c_str());
}

int Convert::fromStringToInt(void) {
    return (atoi(this->_input.c_str()));
}

float Convert::fromStringToFloat(void) {
    return (strtod(this->_input.c_str(), NULL));
}

double Convert::fromStringToDouble(void) {
    return (strtod(this->_input.c_str(), NULL));
}

void Convert::convertAndPrint(char literal) {
    printChar(literal);
    printInt(static_cast<int>(literal));
    printFloat(static_cast<float>(literal));
    printDouble(static_cast<double>(literal));
}

void Convert::convertAndPrint(int literal) {
    printChar(static_cast<char>(literal));
    printInt(literal);
    printFloat(static_cast<float>(literal));
    printDouble(static_cast<double>(literal));
}

void Convert::convertAndPrint(float literal) {
    printChar(static_cast<char>(literal));
    printInt(static_cast<int>(literal));
    printFloat(literal);
    printDouble(static_cast<double>(literal));
}

void Convert::convertAndPrint(double literal) {
    printChar(static_cast<char>(literal));
    printInt(static_cast<char>(literal));
    printFloat(static_cast<float>(literal));
    printDouble(literal);
}

void Convert::convertSpecialFloat(float literal) {
    printChar(static_cast<char>(literal));
    printInt(static_cast<char>(literal));
    printFloat(static_cast<float>(literal));
    printDouble(literal);
}

void Convert::printChar(char literal) {
    // if (this->_input.length() != 1)
    //     std::cout << "char: impossible" << std::endl;
    if (!isprint(literal))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << literal << std::endl;
}

void Convert::printInt(int literal) {
    // if (this->_input.length() != 1) {
    //     std::cout << "int: impossible" << std::endl;
    //     return;
    // }
    std::cout << "int: " << (literal) << std::endl;
}

void Convert::printFloat(float literal) {
    std::cout << "float: "
              << std::fixed
              << std::setprecision(1)
              << literal
              << "f"
              << std::endl;
}

void Convert::printDouble(double literal) {
    std::cout << "double: "
              << std::fixed
              << std::setprecision(1)
              << literal
              << std::endl;
}
