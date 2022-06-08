// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_SCAVTRAP_HPP_
#define EX02_INCLUDES_SCAVTRAP_HPP_

#include <string>
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap{
 public:
    ScavTrap(void);
    explicit ScavTrap(std::string name);
    ScavTrap(const ScavTrap& ct);
    ScavTrap& operator=(const ScavTrap& ct);
    ~ScavTrap(void);
    void guardGate(void);
};

#endif  // EX02_INCLUDES_SCAVTRAP_HPP_
