// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <string>
#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"

Character::Character(void) : ICharacter() {
    std::cout << "Default constructor called for a Character object" << std::endl;
}

Character::Character(std::string name) : ICharacter() {
    std::cout << "String constructor called for a Character object" << std::endl;
    this->_name = name;
}

Character::Character(const Character& src) {
    std::cout << "Copy constructor called for a Character object" << std::endl;
    *this = src;
}

Character& Character::operator=(const Character& rhs) {
    std::cout << "Copy assignment operator called for a Character object" << std::endl;
    this->_name = rhs.getName();
    for (int i = 0; i < 0; ++i) {
        // this->_inventory[i] = rhs.getFromInventory(i);
    }
    return (*this);
}

Character::~Character(void) {
    std::cout << "Default destructor called for a Character object" << std::endl;
}

std::string const& Character::getName(void) const {
    return (this->_name);
}

AMateria* const* Character::getFromInventory(int idx) const {
    return (this->_inventory);
}

void Character::equip(AMateria* m) {
}

void Character::unequip(int idx) {
}

void Character::use(int idx, ICharacter& target) {
}
