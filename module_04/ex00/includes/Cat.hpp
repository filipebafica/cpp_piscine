// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_CAT_HPP_
#define EX00_INCLUDES_CAT_HPP_

#include <string>
#include "./Animal.hpp"

class Cat : public Animal {
 public:
    Cat(void);
    Cat(const Cat& src);
    Cat& operator=(const Cat& rhs);
    ~Cat(void);
    void makeSound(void) const;
};

#endif  // EX00_INCLUDES_CAT_HPP_
