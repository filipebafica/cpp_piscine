// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

int main(void) {
    std::cout <<  std::endl << "[CREATING 'me' CHARACTER]" << std::endl;
    ICharacter* me = new Character("me");
    std::cout << std::endl << "[CREATING 'bob' CHARACTER]" << std::endl;
    ICharacter* bob = new Character("bob");

    std::cout << std::endl << "[CREATING BOOK OF MATERIAS]" << std::endl;
    IMateriaSource* src = new MateriaSource();

    std::cout << std::endl << "[LEARNING MATERIAS]" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << std::endl << "[MAKING MATERIAS]" << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->unequip(2);
    delete tmp;

    std::cout << std::endl << "[USING MATERIAS]" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << std::endl << "[DESTROYING CHARACTERS AND INVENTORY]" << std::endl;
    delete bob;
    delete me;
    std::cout << std::endl << "[DESTROYING BOOK OF MATERIAS]" << std::endl;
    delete src;
    return (0);
}
