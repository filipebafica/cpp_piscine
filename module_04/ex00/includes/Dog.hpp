// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_DOG_HPP_
#define EX00_INCLUDES_DOG_HPP_

#include <string>
#include "./Animal.hpp"

class Dog : public Animal {
 public:
    Dog(void);
    Dog(const Dog& src);
    Dog& operator=(const Dog& rhs);
    ~Dog(void);
    void makeSound(void) const;
};

#endif  // EX00_INCLUDES_DOG_HPP_
