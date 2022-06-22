// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <string>
#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria() {
    std::cout << "Default constructor called for a Cure object" << std::endl;
    this->type = "cure";
}

Cure::Cure(const Cure& src) : AMateria() {
    std::cout << "Copy constructor called for a Cure object" << std::endl;
    *this = src;
}

Cure& Cure::operator=(const Cure& rhs) {
    std::cout << "Copy assignment operator called for a Cure object" << std::endl;
    this->type = rhs.type;
    return (*this);
}

Cure::~Cure(void) {
    std::cout << "Default destructor called for a Cure object" << std::endl;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals "
              << target.getName()
              << "'s wounds *" << std::endl;
}

AMateria* Cure::clone(void) const {
    AMateria* m = new Cure();
    m = const_cast<Cure*>(this);
    return (m);
}
