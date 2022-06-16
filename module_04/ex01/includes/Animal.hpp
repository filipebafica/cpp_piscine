// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_ANIMAL_HPP_
#define EX01_INCLUDES_ANIMAL_HPP_

#include <string>

class Animal {
 public:
    Animal(void);
    Animal(const Animal& src);
    Animal& operator=(const Animal& rhs);
    virtual ~Animal(void);
    std::string getType(void) const;
    void setType(std::string type);
    virtual void makeSound(void) const;

 protected:
   std::string type;
};

#endif  // EX01_INCLUDES_ANIMAL_HPP_
