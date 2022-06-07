// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#include "../includes/headers.hpp"

void randomChump(std::string name) {
    Zombie randomChump;

    randomChump.setName(name);
    randomChump.announce();
}
