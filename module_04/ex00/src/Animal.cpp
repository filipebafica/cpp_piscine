// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Animal.hpp"

Animal::Animal(void) {
    std::cout << "Default constructor called for an Aminal object";
}

Animal::Animal(const Animal& src) {
    std::cout << "Copy constructor called for an Aminal object";
    *this = src;
}

Animal& Animal::operator=(const Animal& rhs) {
    std::cout << "Copy assignment operator called for an Animal object" << std::endl;
    this->type = rhs.type;
    return (*this);
}
