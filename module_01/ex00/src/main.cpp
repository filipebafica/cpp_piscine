// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

int main(void) {
    Zombie* zombie;

    zombie = newZombie("ZombieOne");
    zombie->announce();
    delete(zombie);
    randomChump("ZombieTwo");
    return (0);
}
