// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_ZOMBIE_HPP_
#define EX01_INCLUDES_ZOMBIE_HPP_

#include "./headers.hpp"

class Zombie {
 public:
    Zombie(void);
    ~Zombie(void);
    void setName(std::string name);
    void announce(void);

 private:
    std::string _name;
};

#endif  // EX01_INCLUDES_ZOMBIE_HPP_
