// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

int main(void) {
    Zombie* horde;

    horde = zombieHorde(5, "Adenor");
    for (int i = 0; i < 5; ++i) {
        horde[i].announce();
    }
    delete[](horde);
    return (0);
}

