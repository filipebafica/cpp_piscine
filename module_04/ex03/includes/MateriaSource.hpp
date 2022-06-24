// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_MATERIAASOURCE_HPP_
#define EX03_INCLUDES_MATERIAASOURCE_HPP_

#include <string>
#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
    MateriaSource(void);
    MateriaSource(const MateriaSource& src);
    MateriaSource& operator=(const MateriaSource& rhs);
    ~MateriaSource(void);
    void learnMateria (AMateria* m);
    AMateria* createMateria(std::string const& type);
    AMateria* getFromBook(int idx) const;

 private:
    AMateria* _book[4];
};

#endif // EX03_INCLUDES_MATERIAASOURCE_HPP_
