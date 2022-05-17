// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_HUMANA_HPP_
#define EX03_INCLUDES_HUMANA_HPP_

#include "./headers.hpp"

class HumanA {
 public:
    Weapon weapon;
    void attack(void);

 private:
    std::string name;
};

#endif  // EX03_INCLUDES_HUMANA_HPP_
