// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void) {
    ScavTrap stOne("playerOne");

    stOne.attack("playerTwo");
    stOne.guardGate();
    return (0);
}
