// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/FragTrap.hpp"

int main(void) {
    FragTrap ftOne("playerOne");

    ftOne.attack("playerTwo");
    ftOne.highFivesGuys();
    return (0);
}
