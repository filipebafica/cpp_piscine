// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/FragTrap.hpp"

int main(void) {
    std::cout << std::endl << "[ CONSTRUCTORS ]" << std::endl << std::endl;
    FragTrap ftOne("playerOne");

    std::cout << std::endl << "[ ATTACK ]" << std::endl << std::endl;
    ftOne.attack("playerTwo");

    std::cout << std::endl << "[ HIGH FIVE GUYS ]" << std::endl << std::endl;
    ftOne.highFivesGuys();

    std::cout << std::endl << "[ DESTRUCTORS ]" << std::endl << std::endl;
    return (0);
}
