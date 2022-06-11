// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap(void) {
    std::cout << "Default constructor called for a FragTrap object" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "String constructor called for a FragTrap object" << std::endl;
    this->_name = name;
    this->_className.assign("FragTrap");
    this->_hitPoints = 100;
    // this->_energyPoints = 100;
    FragTrap::_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap() {
    std::cout << "Copy constructor called for a FragTrap object" << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    std::cout << "Copy assignment operator called for a FragTrap object" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

FragTrap::~FragTrap(void) {
    std::cout << "Destructor called for a FragTrap object" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Give me a high five ✋" << std::endl;
}
