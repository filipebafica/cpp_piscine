// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_AMATERIA_HPP_
#define EX03_INCLUDES_AMATERIA_HPP_

#include <string>
#include "./ICharacter.hpp"

class AMateria {
 public:
    AMateria(void);
    AMateria(std::string const& type);
    AMateria(const AMateria& src);
    AMateria& operator=(const AMateria& rhs);
    virtual ~AMateria(void);
    std::string const& getType(void) const; // returns a const reference // makes this const
    void setType(std::string type);
    virtual AMateria* clone(void) const = 0;
    virtual void use(ICharacter& target);

 protected:
    std::string type;
};

#endif  // EX03_INCLUDES_AMATERIA_HPP_
