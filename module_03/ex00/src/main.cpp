// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/ClapTrap.hpp"

int main(void) {
    std::cout << std::endl << "[ CONSTRUCTORS ]" << std::endl << std::endl;
    ClapTrap cp("playerOne");

    std::cout << std::endl << "[ ATTACK ]" << std::endl << std::endl;
    cp.attack("playerTwo");

    std::cout << std::endl << "[ DESTRUCTORS ]" << std::endl << std::endl;
    return (0);
}
