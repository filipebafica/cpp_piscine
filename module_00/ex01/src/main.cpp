/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

void searchContact(PhoneBook *phoneBook) {
    Contact contac;

    for (int i = 0; i < phoneBook->numContacts; i++) {
        contac = phoneBook->contacts[i];
        std::cout << contac.getFirstName() << std::endl;
        std::cout << contac.getLastName() << std::endl;
        std::cout << contac.getNickName() << std::endl;
        std::cout << contac.getPhoneNumber() << std::endl;
        std::cout << contac.getDarkestSecret() << std::endl;
    }
}

std::string getUserInput(std::string field) {
    std::string userInput;

    while (1) {
        std::cout << "Enter the " << field << ": " << std::endl;
        std::getline(std::cin, userInput);
        if (!userInput.empty()) {
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

void loop_parser(void) {
    PhoneBook   phoneBook;
    std::string userOption;

    while (1) {
        std::cout << "Select: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, userOption);
        if (userOption == "ADD")
            addContact(&phoneBook);
        else if (userOption == "SEARCH")
            searchContact(&phoneBook);
        else if (userOption == "EXIT")
            break;
    }
}

int main(void) {
    loop_parser();
    return (0);
}
