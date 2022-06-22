// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_CURE_HPP_
#define EX03_INCLUDES_CURE_HPP_

#include <string>
#include "./AMateria.hpp"

class Cure : public AMateria {
 public:
    Cure(void);
    Cure(const Cure& src);
    Cure& operator=(const Cure& rhs);
    ~Cure(void);
    AMateria* clone(void) const;
    void use(ICharacter& target);
};

#endif  // EX03_INCLUDES_CURE_HPP_
