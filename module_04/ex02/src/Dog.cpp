// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal() {
    std::cout << "Default constructor called for a Dog object" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& src) : Animal() {
    std::cout << "Copy constructor called for a Dog object" << std::endl;
    *this = src;
}

Dog& Dog::operator=(const Dog& rhs) {
    std::cout << "Copy assignment operator called for a Dog object" << std::endl;
    this->type = rhs.type;
    return (*this);
}

Dog::~Dog(void) {
    delete this->brain;
    std::cout << "Default destructor called for a Dog object" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "Dog barks" << std::endl;
}
