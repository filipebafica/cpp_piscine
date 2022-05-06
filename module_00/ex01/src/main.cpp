/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

int parser(PhoneBook *PhoneBook) {
    std::string userInput;

    std::cout << "Type Something" << std::endl;
    std::getline(std::cin, userInput);
    std::cout << userInput << std::endl;
    (void)PhoneBook;
    return (1);
}

void loop(void) {
    PhoneBook phoneBook;
    int       status;

    status = 1;
    while (status) {
        status = parser(&phoneBook);
    }
}

int main(void) {
    loop();
    return (0);
}
