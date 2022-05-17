// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

Weapon::Weapon(void) {
}

Weapon::~Weapon(void) {
}

std::string Weapon::getType(void) const {
    return (this->type);
}

void Weapon::setType(std::string newType) {
    this->type = newType;
}
