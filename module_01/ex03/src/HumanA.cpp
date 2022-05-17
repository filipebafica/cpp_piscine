// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

void HumanA::attack(void) {
    std::cout << this->name
        << " attacks with thir "
        << this->weapon.getType()
        << std::endl;
}
