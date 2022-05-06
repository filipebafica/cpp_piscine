/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */
#ifndef MODULE_00_EX01_INCLUDES_PHONEBOOK_HPP_
#define MODULE_00_EX01_INCLUDES_PHONEBOOK_HPP_

#include "./Contact.hpp"

class PhoneBook {
 public:
    PhoneBook(void);
    ~PhoneBook(void);
    Contact contacts[8];
};

#endif  // MODULE_00_EX01_INCLUDES_PHONEBOOK_HPP_
