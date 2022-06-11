// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/ScavTrap.hpp"

int main(void) {
    std::cout << std::endl << "[ CONSTRUCTORS ]" << std::endl << std::endl;
    ScavTrap stOne("playerOne");

    std::cout << std::endl << "[ ATTACK ]" << std::endl << std::endl;
    stOne.attack("playerTwo");

    std::cout << std::endl << "[ GUARDGATE ]" << std::endl << std::endl;
    stOne.guardGate();

    std::cout << std::endl << "[ DESTRUCTORS ]" << std::endl << std::endl;
    return (0);
}
