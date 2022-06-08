// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap(void) {
    std::cout << "Default constructor called for a ScavTrap object" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "String constructor called for a ScavTrap object" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap() {
    std::cout << "Copy constructor called for a ScavTrap object" << std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
    std::cout << "Copy assignment operator called for a ScavTrap object" << std::endl;
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Destructor called for a ScavTrap object" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap "
              << this->_name
              << " is now in Gate keeper mode"
              << std::endl;
}
