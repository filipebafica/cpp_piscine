/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */
#include "../includes/headers.hpp"

void echo(std::string buff) {
    std::string::iterator it;

    if (buff.empty()) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (it = buff.begin(); it != buff.end(); ++it) {
            char c = toupper(*it);
            std::cout << c;
        }
        std::cout << std::endl;
    }
}
