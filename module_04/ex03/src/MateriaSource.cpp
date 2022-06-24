// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <string>
#include "../includes/AMateria.hpp"
#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    std::cout << "Default constructor called for a MateriaSource object" << std::endl;
    for (int i = 0; i < 4; ++i) {
        this->_book[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& src) {
    std::cout << "Copy constructor called for a MateriaSource object" << std::endl;
    *this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
    std::cout << "Copy assignment operator called for a MateriaSource object" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_book[i] != NULL)
            delete this->_book[i];
        if (rhs.getFromBook(i))
            this->_book[i] = rhs.getFromBook(i)->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource(void) {
    std::cout << "Default destructor called for a MateriaSource object" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!this->_book[i]) {
            this->_book[i] = m;
            break;
        }
    }
}

AMateria* createMateria(std::string const& type) {
    return (0);
}

AMateria* MateriaSource::getFromBook(int idx) const {
    if (idx >= 0 && idx < 4)
        return (this->_book[idx]);
    return (NULL);
}
