// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/DiamondTrap.hpp"

int main(void) {
    std::cout << std::endl << "[ CONSTRUCTORS ]" << std::endl << std::endl;
    DiamondTrap diamond("playerOne");

    std::cout << std::endl << "[ ATTRIBUTES ]" << std::endl << std::endl;
    std::cout << "Hit Points: " << diamond.getHitPoints() << std::endl
              << "Energy Points: " << diamond.getEnergyPoints() << std::endl
              << "Attack Damage: " << diamond.getAttackDamage() << std::endl;

    std::cout << std::endl << "[ WHO AM I? ]" << std::endl << std::endl;
    diamond.whoAmI();

    std::cout << std::endl << "[ ATTACK ]" << std::endl << std::endl;
    diamond.attack("playerTwo");

    std::cout << std::endl << "[ DESTRUCTORS ]" << std::endl << std::endl;
    return (0);
}
