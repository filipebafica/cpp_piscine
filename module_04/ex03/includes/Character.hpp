// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_CHARACTER_HPP_
#define EX03_INCLUDES_CHARACTER_HPP_

#include <string>
#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Character : public ICharacter {
 public:
    Character(void);
    Character(std::string name);
    Character(const Character& src);
    Character& operator=(const Character& rhs);
    ~Character(void);
    std::string const& getName(void) const;
    AMateria* const* getFromInventory(int idx) const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

 private:
    std::string _name;
    AMateria* _inventory[4];
};

#endif  // EX03_INCLUDES_CHARACTER_HPP_
