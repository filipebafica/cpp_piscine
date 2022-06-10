// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_SCAVTRAP_HPP_
#define EX03_INCLUDES_SCAVTRAP_HPP_

#include <string>
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
 public:
    ScavTrap(void);
    explicit ScavTrap(std::string name);
    ScavTrap(const ScavTrap& ct);
    ScavTrap& operator=(const ScavTrap& ct);
    ~ScavTrap(void);
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
    void guardGate(void);
};

#endif  // EX03_INCLUDES_SCAVTRAP_HPP_
