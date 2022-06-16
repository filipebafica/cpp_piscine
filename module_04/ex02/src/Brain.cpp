// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Brain.hpp"

Brain::Brain(void) {
    std::cout << "Default constructor called for a Brain object" << std::endl;
}

Brain::Brain(const Brain& src) {
    std::cout << "Copy constructor called for a Brain object" << std::endl;
    *this = src;
}

Brain& Brain::operator=(const Brain& rhs) {
    std::cout << "Copy assignment operator called for a Brain object" << std::endl;
    for (int i = 0; i < 100; ++i) {
        this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}

Brain::~Brain(void) {
    std::cout << "Default destructor called for a Brain object" << std::endl;
}
