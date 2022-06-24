// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_IMATERIASOURCE_HPP_
#define EX03_INCLUDES_IMATERIASOURCE_HPP_

#include <string>
#include "./AMateria.hpp"

class IMateriaSource {
 public:
    virtual ~IMateriaSource(void) {};
    virtual void learnMateria (AMateria* m) = 0;
    virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif // EX03_INCLUDES_IMATERIASOURCE_HPP_
