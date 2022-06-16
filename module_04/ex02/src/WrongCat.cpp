// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
    std::cout << "Default constructor called for a WrongCat object" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal() {
    std::cout << "Copy constructor called for a WrongCat object" << std::endl;
    *this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    std::cout << "Copy assignment operator called for a WrongCat object" << std::endl;
    this->type = rhs.type;
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "Default destructor called for a WrongCat object" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "WrongCat meows" << std::endl;
}
