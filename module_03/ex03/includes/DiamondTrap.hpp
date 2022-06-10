// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_DIAMONDTRAP_HPP_
#define EX03_INCLUDES_DIAMONDTRAP_HPP_

#include <string>
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
    DiamondTrap(void);
    explicit DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& ct);
    DiamondTrap& operator=(const DiamondTrap& ct);
    ~DiamondTrap(void);
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
    void attack(const std::string& target);
    void whoAmI(void);

 private:
    std::string _name;
};

#endif  // EX03_INCLUDES_DIAMONDTRAP_HPP_
