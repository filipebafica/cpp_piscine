// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/headers.hpp"

int main(int argc , char **argv) {
    Harl harl;

    if (argc != 2) {
        std::cout << "Wrong number of parameters" << std::endl;
        return (0);
    }
    harl.complain(argv[1]);
    return (0);
}
