// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie(void) {
    this->announce();
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::announce(void) {
    std::cout << this->_name << ' ' << "BraiiiiiiinnnzzzZ..." << std::endl;
}
