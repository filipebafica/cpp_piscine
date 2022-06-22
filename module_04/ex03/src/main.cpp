// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"

void testFunc(Character ch) {
    (void)ch;
}

int main(void) {
    Character ch1("ch1");
    // Character ch2("ch2");
    // Ice       *i1 = new Ice();
    // Ice       *i2 = new Ice();
    // Cure      *c1 = new Cure();
    // Cure      *c2 = new Cure();


    // ch1.equip(i1);
    // ch1.equip(i2);
    // ch1.equip(c1);
    // ch1.equip(c2);

    // for (int i = 0; i < 4; ++i) {
    //    std::cout << ch1.getFromInventory(i)->getType() << std::endl;
    // }

    // ch2 = ch1;
    // for (int i = 0; i < 4; ++i) {
    //    std::cout << "ch1: " << ch1.getFromInventory(i) << std::endl;
    //    std::cout << "ch2: " << ch2.getFromInventory(i) << std::endl;
    // }

    testFunc(ch1);

    return (0);
}
