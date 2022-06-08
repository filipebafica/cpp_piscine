// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/ClapTrap.hpp"

#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) {
    std::cout << "Default constructor called for a ClapTrap object" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "String constructor called for a ClapTrap object" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
    std::cout << "Copy constructor called for a ClapTrap object" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
    std::cout << "Copy assignment operator called for a ClapTrap object" << std::endl;
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called for a ClapTrap object" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << this->_name
              << " attacks " << target
              << ", causing " << this->_attackDamage
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name
              << " takes " << amount
              << " points of damage! " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << this->_name
              << " repaired " << amount
              << " hit points! " << std::endl;
}
