// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/headers.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special ketchup "
    << "burger. I really do!"
    << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. "
    << "You didn't put enough bacon in my burger! "
    << "If you did, I wouldn't be asking for more!"
    << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. "
    << "I've been coming for years whereas you started working here "
    << "since last month."
    << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now."
    << std::endl;
}

void Harl::complain(std::string Level) {
    void (Harl::*HarlMemFn[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
    std::string FnName[] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    for (int i = 0; i < 4; ++i){
        if (!FnName[i].compare(Level)) {
            (this->*HarlMemFn[i])();
            break;
        }
    }
}

