// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_CLAPTRAP_HPP_
#define EX03_INCLUDES_CLAPTRAP_HPP_

#include <string>

class ClapTrap {
 public:
    ClapTrap(void);
    explicit ClapTrap(std::string name);
    ClapTrap(const ClapTrap& ct);
    ClapTrap& operator=(const ClapTrap& ct);
    ~ClapTrap(void);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;

 protected:
    std::string _name;
    unsigned int _hitPoints, _energyPoints, _attackDamage;
};

#endif  // EX03_INCLUDES_CLAPTRAP_HPP_
