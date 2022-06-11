// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/DiamondTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void) {
    std::cout << "Default constructor called for a DiamondTrap object" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
                                             ScavTrap(name + "_scav_name"),
                                             FragTrap(name + "_frag_name") {
    std::cout << "String constructor called for a DiamondTrap object" << std::endl;
    this->_name = name;
    this->_className.assign("DiamondTrap");
    ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPointsBase;
    this->_attackDamage = FragTrap::_attackDamage;

}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(), ScavTrap(), FragTrap() {
    std::cout << "Copy constructor called for a DiamondTrap object" << std::endl;
    *this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
    std::cout << "Copy assignment operator called for a DiamondTrap object" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "Destructor called for a DiamondTrap object" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    std::string tmpName;

    tmpName = ScavTrap::_name;
    ScavTrap::_name = DiamondTrap::_name;
    ScavTrap::_className = DiamondTrap::_className;
    ScavTrap::attack(target);
    ScavTrap::_name = tmpName;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl
              << "DiamondTrap name: " << this->_name << std::endl;
}

