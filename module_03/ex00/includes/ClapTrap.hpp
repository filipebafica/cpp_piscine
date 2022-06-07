// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_CLAP_TRAP_HPP_
#define EX00_INCLUDES_CLAP_TRAP_HPP_
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

 private:
    std::string _name;
    unsigned int _hitPoints, _energyPoints, _attackDamage;
};

#endif  // EX00_INCLUDES_CLAP_TRAP_HPP_
