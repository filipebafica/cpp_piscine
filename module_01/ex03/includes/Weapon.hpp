// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_WEAPON_HPP_
#define EX03_INCLUDES_WEAPON_HPP_

#include "../includes/headers.hpp"

class Weapon {
 public:
    explicit Weapon(std::string newType);
    ~Weapon(void);
    std::string getType(void) const;
    void setType(std::string newType);

 private:
    std::string type;
};

#endif  // EX03_INCLUDES_WEAPON_HPP_
