/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

void repl(void) {
    PhoneBook   phoneBook;
    std::string userOption;

    while (1) {
        std::cout << "Select: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, userOption);
        if (!std::cin) {
            if (std::cin.eof()) {
                std::cin.clear();
                std::cout << "THE PROGRAM HAS ENDED" << std::endl;
                break;
            }
        }
        if (userOption == "ADD")
            addContact(&phoneBook);
        else if (userOption == "SEARCH")
            searchContact(&phoneBook);
        else if (userOption == "EXIT") {
            std::cout << "THE PROGRAM HAS ENDED" << std::endl;
            break;
        }
    }
}

int main(void) {
    repl();
    return (0);
}
