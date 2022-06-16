// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_DOG_HPP_
#define EX01_INCLUDES_DOG_HPP_

#include <string>
#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal {
 public:
    Dog(void);
    Dog(const Dog& src);
    Dog& operator=(const Dog& rhs);
    ~Dog(void);
    void makeSound(void) const;

 private:
    Brain* brain;
};

#endif  // EX01_INCLUDES_DOG_HPP_
