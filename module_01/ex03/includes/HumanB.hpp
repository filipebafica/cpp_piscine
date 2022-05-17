// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_HUMANB_HPP_
#define EX03_INCLUDES_HUMANB_HPP_

#include "./headers.hpp"

class HumanB {
 public:
    Weapon weapon;
    void attack(void);

 private:
    std::string name;
};

#endif  // EX03_INCLUDES_HUMANB_HPP_
