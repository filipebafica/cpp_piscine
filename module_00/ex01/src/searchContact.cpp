/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

std::string truncString(std::string s) {
    if (s.length() > 10)
        return (s.substr(0, 9) + ".");
    return (s);
}

void searchContact(PhoneBook *phoneBook) {
    Contact contac;

    std::cout << std::setw(11) << "INDEX" << "|";
    std::cout << std::setw(11) << "FIRST NAME" << "|";
    std::cout << std::setw(11) << "LAST NAME" << "|";
    std::cout << std::setw(11) << "NICK NAME" << "|";
    std::cout << std::endl;
    for (int i = 0; i < phoneBook->numContacts; i++) {
        contac = phoneBook->contacts[i];
        std::cout << std::setw(11) << i << "|";
        std::cout << std::setw(11) << truncString(contac.getFirstName()) << "|";
        std::cout << std::setw(11) << truncString(contac.getLastName()) << "|";
        std::cout << std::setw(11) << truncString(contac.getNickName()) << "|";
        std::cout << std::endl;
    }
}
