// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_SCAVTRAP_HPP_
#define EX03_INCLUDES_SCAVTRAP_HPP_

#include <string>
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
    ScavTrap(void);
    explicit ScavTrap(std::string name);
    ScavTrap(const ScavTrap& src);
    ScavTrap& operator=(const ScavTrap& rhs);
    ~ScavTrap(void);
    void guardGate(void);

 protected:
    unsigned int _energyPointsBase;
};

#endif  // EX03_INCLUDES_SCAVTRAP_HPP_
