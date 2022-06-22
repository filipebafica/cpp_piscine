// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_ICE_HPP_
#define EX03_INCLUDES_ICE_HPP_

#include <string>
#include "./AMateria.hpp"

class Ice : public AMateria {
 public:
    Ice(void);
    Ice(const Ice& src);
    Ice& operator=(const Ice& rhs);
    ~Ice(void);
    AMateria* clone(void) const;
    void use(ICharacter& target);
};

#endif  // EX03_INCLUDES_ICE_HPP_
