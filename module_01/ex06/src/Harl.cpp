// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/headers.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl
    << "I love having extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special ketchup "
    << "burger. I really do!"
    << std::endl << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl
    << "I cannot believe adding extra bacon costs more money. "
    << "You didn't put enough bacon in my burger! "
    << "If you did, I wouldn't be asking for more!"
    << std::endl << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl
    << "I think I deserve to have some extra bacon for free. "
    << "I've been coming for years whereas you started working here "
    << "since last month."
    << std::endl << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl
    << "This is unacceptable! I want to speak to the manager now."
    << std::endl;
}

void Harl::complain(std::string Level) {
    int i;
    std::string FnName[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (i = 0; i < 4; ++i) {
        if (!FnName[i].compare(Level)) {
            break;
        }
    }
    switch (i) {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

