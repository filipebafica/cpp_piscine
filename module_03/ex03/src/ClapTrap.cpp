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
    this->_className.assign("ClapTrap");
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "Copy constructor called for a ClapTrap object" << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    std::cout << "Copy assignment operator called for a ClapTrap object" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called for a ClapTrap object" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << this->_className
              << " "
              << this->_name
              << " attacks " << target
              << ", causing " << this->_attackDamage
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->_className
              << " "
              << this->_name
              << " takes " << amount
              << " points of damage! " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << this->_className
              << " "
              << this->_name
              << " repaired " << amount
              << " hit points! " << std::endl;
}

std::string ClapTrap::getName(void) const {
    return (this->_name);
}

std::string ClapTrap::getClassName(void) const {
    return (this->_className);
}

unsigned int ClapTrap::getHitPoints(void) const {
    return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const {
    return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const {
    return (this->_attackDamage);
}
