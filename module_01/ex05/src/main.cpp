// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/headers.hpp"

int main(void) {
    Harl harl;

    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("");
    harl.complain("hello world");
    return (0);
}
