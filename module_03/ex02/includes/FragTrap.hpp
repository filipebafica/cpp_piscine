// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_FRAGTRAP_HPP_
#define EX02_INCLUDES_FRAGTRAP_HPP_

#include <string>
#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap{
 public:
    FragTrap(void);
    explicit FragTrap(std::string name);
    FragTrap(const FragTrap& ct);
    FragTrap& operator=(const FragTrap& ct);
    ~FragTrap(void);
    void highFivesGuys(void);
};

#endif  // EX02_INCLUDES_FRAGTRAP_HPP_
