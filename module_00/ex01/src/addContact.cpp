/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

/*
    NEED TO CHECK
    FOR A STRING WITH
    ONLY SPACES
*/

int isValidInput(std::string userInput) {
    std::string::iterator it;

    for (it = userInput.begin(); it != userInput.end(); ++it) {
        if (!(*it >= 32 && *it <= 127)) {
            std::cout << "Invalid character" << std::endl;
            return (0);
        }
    }
    return (1);
}

std::string getUserInput(std::string field) {
    std::string userInput;

    while (1) {
        std::cout << "Enter the " << field << ": " << std::endl;
        std::getline(std::cin, userInput);
        if (!userInput.empty() && isValidInput(userInput)) {
            break;
        }
    }
    return (userInput);
}

void addContact(PhoneBook *phoneBook) {
    int index;

    if (phoneBook->numContacts == 7)
        phoneBook->numContacts = 0;
    index = phoneBook->numContacts;
    phoneBook->contacts[index].setFirstName(getUserInput("First Name"));
    phoneBook->contacts[index].setLastName(getUserInput("Last Name"));
    phoneBook->contacts[index].setNickName(getUserInput("Nick Name"));
    phoneBook->contacts[index].setPhoneNumber(getUserInput("Phone Number"));
    phoneBook->contacts[index].setDarkestSecret(getUserInput("Darkest Secret"));
    phoneBook->numContacts++;
}

