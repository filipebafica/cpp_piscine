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
    this->_className.assign("ScavTrap");
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_energyPointsBase = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap() {
    std::cout << "Copy constructor called for a ScavTrap object" << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    std::cout << "Copy assignment operator called for a ScavTrap object" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Destructor called for a ScavTrap object" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << this->_name
              << " is now in Gate keeper mode"
              << std::endl;
}
