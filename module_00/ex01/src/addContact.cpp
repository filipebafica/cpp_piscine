/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

std::string getUserInput(std::string field) {
    std::string userInput;

    while (1) {
        std::cout << "Enter the " << field << ": " << std::endl;
        std::getline(std::cin, userInput);
        if (!std::cin) {
            if (std::cin.eof()) {
                std::cin.clear();
                std::cout << "THE PROGRAM HAS ENDED" << std::endl;
                exit(0);
            }
        }
        if (!userInput.empty() && isPrintAscii(userInput) && isNotSpaces(userInput)) {
            break;
        }
    }
    return (userInput);
}

void addContact(PhoneBook *phoneBook) {
    static int index;

    if (index > 7)
        index = 0;
    phoneBook->contacts[index].setFirstName(getUserInput("First Name"));
    phoneBook->contacts[index].setLastName(getUserInput("Last Name"));
    phoneBook->contacts[index].setNickName(getUserInput("Nick Name"));
    phoneBook->contacts[index].setPhoneNumber(getUserInput("Phone Number"));
    phoneBook->contacts[index].setDarkestSecret(getUserInput("Darkest Secret"));
    ++index;
    if (phoneBook->numContacts <= 7)
        phoneBook->numContacts++;
}

