// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <string>
#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria(void) : type("amateria") {
    std::cout << "Default constructor called for an AMateria object" << std::endl;
}

AMateria::AMateria(std::string const& type) : type(type) {
    std::cout << "String constructor called for an AMateria object" << std::endl;
}

AMateria::AMateria(const AMateria& src) {
    std::cout << "Copy constructor called for an AMateria object" << std::endl;
    *this = src;
}

AMateria& AMateria::operator=(const AMateria& rhs) {
    std::cout << "Copy assignment operator called for an AMateria object" << std::endl;
    return (*this);
}

AMateria::~AMateria(void) {
    std::cout << "Default destructor called for an AMateria object" << std::endl;
}

std::string const& AMateria::getType(void) const {
    return (this->type);
}

void AMateria::setType(std::string type) {
    this->type = type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}

