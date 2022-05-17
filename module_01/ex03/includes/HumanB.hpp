// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_HUMANB_HPP_
#define EX03_INCLUDES_HUMANB_HPP_

#include "./headers.hpp"

class HumanB {
 public:
    explicit HumanB(std::string name);
    ~HumanB(void);
    void setWeapon(Weapon weapon);
    void setName(std::string name);
    void attack(void);

 private:
    Weapon weapon;
    std::string name;
};

#endif  // EX03_INCLUDES_HUMANB_HPP_
