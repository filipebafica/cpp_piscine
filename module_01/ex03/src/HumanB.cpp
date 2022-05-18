// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name) {}

HumanB::~HumanB(void) {}

void HumanB::setName(std::string name) {
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack(void) {
    std::cout << this->name
        << " attacks with thir "
        << this->weapon->getType()
        << std::endl;
}
