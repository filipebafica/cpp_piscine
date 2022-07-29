// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
    std::cout << "Default constructor called for a WrongAnimal object" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
    std::cout << "Copy constructor called for a WrongAnimal object" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    std::cout << "Copy assignment operator called for a WrongAnimal object" << std::endl;
    this->type = rhs.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "Default destructor called for a WrongAnimal object" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}

void WrongAnimal::setType(std::string type) {
    this->type = type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal makes a sound" << std::endl;
}
