/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */
#ifndef EX01_INCLUDES_PHONEBOOK_HPP_
#define EX01_INCLUDES_PHONEBOOK_HPP_

#include "./Contact.hpp"

class PhoneBook {
 public:
    PhoneBook(void);
    ~PhoneBook(void);
    Contact contacts[8];
    int     numContacts;
};

#endif  // EX01_INCLUDES_PHONEBOOK_HPP_
