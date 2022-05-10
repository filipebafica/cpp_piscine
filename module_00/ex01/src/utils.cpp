/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include "../includes/headers.hpp"

int isNotSpaces(std::string userInput) {
    std::string::iterator it;

    for (it = userInput.begin(); it != userInput.end(); ++it) {
        if (*it != ' ')
            return (1);
    }
    std::cout << "Invalid character" << std::endl << std::endl;
    return (0);
}

int isDigit(std::string userInput) {
    std::string::iterator it;

    for (it = userInput.begin(); it != userInput.end(); ++it) {
        if (!(*it >= '0' && *it <= '9')) {
            std::cout << "Invalid selection" << std::endl << std::endl;
            return (0);
        }
    }
    return (1);
}

int isPrintAscii(std::string userInput) {
    std::string::iterator it;

    for (it = userInput.begin(); it != userInput.end(); ++it) {
        if (!(*it >= 32 && *it <= 127)) {
            std::cout << "Invalid character" << std::endl << std::endl;
            return (0);
        }
    }
    return (1);
}

