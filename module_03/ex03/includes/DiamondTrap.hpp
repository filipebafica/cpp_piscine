// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_DIAMONDTRAP_HPP_
#define EX03_INCLUDES_DIAMONDTRAP_HPP_

#include <string>
#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
 public:
    DiamondTrap(void);
    explicit DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& src);
    DiamondTrap& operator=(const DiamondTrap& rhs);
    ~DiamondTrap(void);
    void attack(const std::string& target);
    void whoAmI(void);

 private:
    std::string _name;
};



#endif  // EX03_INCLUDES_DIAMONDTRAP_HPP_
