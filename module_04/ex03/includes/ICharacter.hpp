// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_ICHARACTER_HPP_
#define EX03_INCLUDES_ICHARACTER_HPP_

#include <string>
#include "./AMateria.hpp"

class AMateria;

class ICharacter {
 public:
    virtual ~ICharacter(void) {};
    virtual std::string const& getName(void) const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    virtual AMateria* getFromInventory(int idx) const = 0;
};

#endif  // EX03_INCLUDES_ICHARACTER_HPP_
