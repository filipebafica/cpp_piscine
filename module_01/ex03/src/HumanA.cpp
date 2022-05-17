// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) {
    std::cout << this->name
        << " attacks with thir "
        << this->weapon.getType()
        << std::endl;
}
