// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

int main(void) {
    Zombie* zombie;

    zombie = newZombie("Hello");
    zombie->announce();
    delete(zombie);
    randomChump("World");
    return (0);
}

