// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_ZOMBIE_HPP_
#define EX00_INCLUDES_ZOMBIE_HPP_

#include "./headers.hpp"

class Zombie {
 public:
    Zombie(void);
    ~Zombie(void);
    void setName(std::string name);
    void announce(void);

 private:
    std::string name;
};

#endif  // EX00_INCLUDES_ZOMBIE_HPP_
