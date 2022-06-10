// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_FRAGTRAP_HPP_
#define EX03_INCLUDES_FRAGTRAP_HPP_

#include <string>
#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
 public:
    FragTrap(void);
    explicit FragTrap(std::string name);
    FragTrap(const FragTrap& ct);
    FragTrap& operator=(const FragTrap& ct);
    ~FragTrap(void);
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
    void highFivesGuys(void);
};

#endif  // EX03_INCLUDES_FRAGTRAP_HPP_
