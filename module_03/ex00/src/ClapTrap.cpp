// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/ClapTrap.hpp"

#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  std::cout << "String constructor called" << std::endl;
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ct) {
  std::cout << "Copy constructor called" << std::endl;
  *this = ct;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_name = ct._name;
  this->_hitPoints = ct._hitPoints;
  this->_energyPoints = ct._energyPoints;
  this->_attackDamage = ct._attackDamage;
  return (*this);
}

ClapTrap::~ClapTrap(void) {
  std::cout << "Destructor called" << std::endl;
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
