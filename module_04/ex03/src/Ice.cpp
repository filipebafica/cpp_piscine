// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <string>
#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria() {
    std::cout << "Default constructor called for an Ice object" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice& src) : AMateria() {
    std::cout << "Copy constructor called for an Ice object" << std::endl;
    *this = src;
}

Ice& Ice::operator=(const Ice& rhs) {
    std::cout << "Copy assignment operator called for an Ice object" << std::endl;
    this->type = rhs.type;
    return (*this);
}

Ice::~Ice(void) {
    std::cout << "Default destructor called for an Ice object" << std::endl;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at "
              << target.getName()
              << " *" << std::endl;
}

AMateria* Ice::clone(void) const {
    AMateria* m = new Ice();
    m = const_cast<Ice*>(this);
    return (m);
}

