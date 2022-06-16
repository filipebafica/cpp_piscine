// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_WRONGANIMAL_HPP_
#define EX01_INCLUDES_WRONGANIMAL_HPP_

#include <string>

class WrongAnimal {
 public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal& src);
    WrongAnimal& operator=(const WrongAnimal& rhs);
    ~WrongAnimal(void);
    std::string getType(void) const;
    void setType(std::string type);
    void makeSound(void) const;

 protected:
   std::string type;
};

#endif  // EX01_INCLUDES_WRONGANIMAL_HPP_
