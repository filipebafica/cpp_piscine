// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_ICHARACTER_HPP_
#define EX03_INCLUDES_ICHARACTER_HPP_

class ICharacter {
 public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;

};

#endif  // EX03_INCLUDES_ICHARACTER_HPP_
