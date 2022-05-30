/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

std::string getUserInput(void) {
    std::string userInput;

    while (1) {
        std::cout << "Select an Index: " << std::endl;
        std::getline(std::cin, userInput);
        if (!std::cin) {
            if (std::cin.eof()) {
                std::cin.clear();
                std::cout << "THE PROGRAM HAS ENDED" << std::endl;
                exit(0);
            }
        }
        if (!userInput.empty() && isDigit(userInput) && isNotSpaces(userInput)) {
            break;
        }
    }
    return (userInput);
}

void  displayByIndex(PhoneBook *phoneBook) {
    std::string userInput;
    Contact     contact;

    userInput = getUserInput();
    if (atoi(userInput.c_str()) >= phoneBook->numContacts) {
         std::cout << "Invalid selection" << std::endl << std::endl;
         return;
    }
    contact = phoneBook->contacts[atoi(userInput.c_str())];
    std::cout << "INDEX: " << userInput << std::endl;
    std::cout << "FIRST NAME: " << contact.getFirstName() << std::endl;
    std::cout << "LAST NAME: " << contact.getLastName() << std::endl;
    std::cout << "NICK NAME: " << contact.getNickName() << std::endl;
    std::cout << "PHONE NUMBER: " << contact.getPhoneNumber() << std::endl;
    std::cout << "DARKEST SECRET: " << contact.getDarkestSecret() << std::endl;
    std::cout << std::endl;
}

std::string truncString(std::string s) {
    if (s.length() > 10)
        return (s.substr(0, 9) + ".");
    return (s);
}

void displayTable(PhoneBook *phoneBook) {
    Contact contact;

    std::cout << std::setw(11) << "INDEX" << "|";
    std::cout << std::setw(11) << "FIRST NAME" << "|";
    std::cout << std::setw(11) << "LAST NAME" << "|";
    std::cout << std::setw(11) << "NICK NAME" << "|";
    std::cout << std::endl;
    for (int i = 0; i < phoneBook->numContacts; i++) {
        contact = phoneBook->contacts[i];
        std::cout << std::setw(11) << i << "|";
        std::cout << std::setw(11) << truncString(contact.getFirstName()) << "|";
        std::cout << std::setw(11) << truncString(contact.getLastName()) << "|";
        std::cout << std::setw(11) << truncString(contact.getNickName()) << "|";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void searchContact(PhoneBook *phoneBook) {
    displayTable(phoneBook);
    if (phoneBook->numContacts) {
        displayByIndex(phoneBook);
    }
}
