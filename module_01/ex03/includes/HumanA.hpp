// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_HUMANA_HPP_
#define EX03_INCLUDES_HUMANA_HPP_

#include "./headers.hpp"

class HumanA {
 public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    void attack(void);

 private:
    std::string name;
    Weapon &weapon;
};

#endif  // EX03_INCLUDES_HUMANA_HPP_
