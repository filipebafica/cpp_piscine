// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

Zombie* newZombie(std::string name) {
    Zombie* newZombie;

    newZombie = new(Zombie);
    newZombie->setName(name);
    return (newZombie);
}
