// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie(void) {
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << this->name << ' ' << "BraiiiiiiinnnzzzZ..." << std::endl;
}
