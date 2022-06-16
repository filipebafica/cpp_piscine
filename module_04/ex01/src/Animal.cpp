// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Animal.hpp"

Animal::Animal(void) : type("Animal") {
    std::cout << "Default constructor called for an Animal object" << std::endl;
}

Animal::Animal(const Animal& src) {
    std::cout << "Copy constructor called for an Animal object" << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal& rhs) {
    std::cout << "Copy assignment operator called for an Animal object" << std::endl;
    this->type = rhs.type;
    return (*this);
}

Animal::~Animal(void) {
    std::cout << "Default destructor called for an Animal object" << std::endl;
}

std::string Animal::getType(void) const {
    return (this->type);
}

void Animal::setType(std::string type) {
    this->type = type;
}

void Animal::makeSound(void) const {
    std::cout << "Animal makes a sound" << std::endl;
}
