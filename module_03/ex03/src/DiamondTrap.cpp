// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/DiamondTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void) {
    std::cout << "Default constructor called for a DiamondTrap object" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(name + "_frag_name"), ScavTrap(name + "_scav_name") {
    std::cout << "String constructor called for a DiamondTrap object" << std::endl;
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(), FragTrap(), ScavTrap() {
    std::cout << "Copy constructor called for a DiamondTrap object" << std::endl;
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) {
    std::cout << "Copy assignment operator called for a DiamondTrap object" << std::endl;
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "Destructor called for a DiamondTrap object" << std::endl;
}

std::string DiamondTrap::getName(void) const {
    return (this->_name);
}

unsigned int DiamondTrap::getHitPoints(void) const {
    return (this->_hitPoints);
}

unsigned int DiamondTrap::getEnergyPoints(void) const {
    return (this->_energyPoints);
}

unsigned int DiamondTrap::getAttackDamage(void) const {
    return (this->_attackDamage);
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl
              << "DiamondTrap name: " << this->_name << std::endl;
}

