// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <string>
#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"

Character::Character(void) : ICharacter() {
    std::cout << "Default constructor called for a Character object" << std::endl;
    for (int i = 0; i < 4; ++i) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(std::string name) : ICharacter() {
    std::cout << "String constructor called for a Character object" << std::endl;
    this->_name = name;
    for (int i = 0; i < 4; ++i) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(const Character& src) {
    std::cout << "Copy constructor called for a Character object" << std::endl;
    *this = src;
    // std::cout << &src << std::endl;
}

Character& Character::operator=(const Character& rhs) {
    std::cout << "Copy assignment operator called for a Character object" << std::endl;
    this->_name = rhs.getName();
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
        if (rhs.getFromInventory(i)->getType() == "ice")
            this->_inventory[i] = new Ice();
        if (rhs.getFromInventory(i)->getType() == "cure")
            this->_inventory[i] = new Cure();
        *this->_inventory[i] = *rhs.getFromInventory(i);
    }
    return (*this);
}

Character::~Character(void) {
    std::cout << "Default destructor called for a Character object" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
}

std::string const& Character::getName(void) const {
    return (this->_name);
}

void Character::setName(std::string name) {
    this->_name = name;
}

AMateria* Character::getFromInventory(int idx) const {
    return (this->_inventory[idx]);
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    (void) idx;
    (void) target;
}
