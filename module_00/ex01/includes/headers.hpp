/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */
#ifndef EX01_INCLUDES_HEADERS_HPP_
#define EX01_INCLUDES_HEADERS_HPP_

#include <stdlib.h>
#include <iostream>
#include <limits>
#include <iomanip>
#include <string>
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

void addContact(PhoneBook *phoneBook);
void searchContact(PhoneBook *phoneBook);
int isNotSpaces(std::string userInput);
int isPrintAscii(std::string userInput);
int isDigit(std::string userInput);

#endif  // EX01_INCLUDES_HEADERS_HPP_

