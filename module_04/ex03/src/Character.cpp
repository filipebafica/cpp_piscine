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
}

Character& Character::operator=(const Character& rhs) {
    std::cout << "Copy assignment operator called for a Character object" << std::endl;
    this->_name = rhs.getName();
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] != NULL) {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
        if (rhs.getFromInventory(i))
            this->_inventory[i] = rhs.getFromInventory(i)->clone();
    }
    return (*this);
}

Character::~Character(void) {
    std::cout << "Default destructor called for a Character object" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] != NULL) {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
}

std::string const& Character::getName(void) const {
    return (this->_name);
}

void Character::setName(std::string name) {
    this->_name = name;
}

AMateria* Character::getFromInventory(int idx) const {
    if (idx >= 0 && idx < 4)
        return (this->_inventory[idx]);
    return (NULL);
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = m;
            std::cout << "Equiping " << m->getType() << " materia" << std::endl;
            return;
        }
    }
    std::cout << "Unable to equip a materia" << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL) {
        std::cout << "Unequiping " << this->_inventory[idx]->getType() << " materia" << std::endl;
        this->_inventory[idx] = NULL;
        return;
    }
     std::cout << "Unable to unequip a materia" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}
