// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_AMATERIA_HPP_
#define EX03_INCLUDES_AMATERIA_HPP_

#include <string>
#include "./ICharacter.hpp"

class AMateria {
 protected:
    std::string type;

 public:
    AMateria(void);
    AMateria(const AMateria& src);
    AMateria& operator=(const AMateria& rhs);
    virtual ~AMateria(void);
    AMateria(std::string const & type);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    std::string const& getType() const;
    void setType(std::string type);
};

#endif  // EX03_INCLUDES_AMATERIA_HPP_
