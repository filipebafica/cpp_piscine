// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_WRONGCAT_HPP_
#define EX00_INCLUDES_WRONGCAT_HPP_

#include <string>
#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
    WrongCat(void);
    WrongCat(const WrongCat& src);
    WrongCat& operator=(const WrongCat& rhs);
    ~WrongCat(void);
    void makeSound(void) const;
};

#endif  // EX00_INCLUDES_WRONGCAT_HPP_
