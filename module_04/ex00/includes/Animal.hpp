// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_ANIMAL_HPP_
#define EX00_INCLUDES_ANIMAL_HPP_

#include <string>

class Animal {
 public: 
    Animal(void);
    Animal(const Animal& src);
    Animal& operator=(const Animal& rhs);
    ~Animal(void);

 protected:
    std::string type;
};

#endif  // EX00_INCLUDES_ANIMAL_HPP_
