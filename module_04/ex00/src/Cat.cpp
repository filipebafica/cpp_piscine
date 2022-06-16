// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal() {
    std::cout << "Default constructor called for a Cat object" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& src) : Animal() {
    std::cout << "Copy constructor called for a Cat object" << std::endl;
    *this = src;
}

Cat& Cat::operator=(const Cat& rhs) {
    std::cout << "Copy assignment operator called for a Cat object" << std::endl;
    this->type = rhs.type;
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Default destructor called for a Cat object" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Cat meows" << std::endl;
}
