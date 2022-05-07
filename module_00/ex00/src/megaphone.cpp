/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */
#include "../includes/headers.hpp"

int main(int argc, char **argv) {
    std::string buffer;
    int         i;

    i = 1;
    while (argv[i]) {
        buffer.append(argv[i]);
        ++i;
    }
    echo(buffer);
    --argc;
    return (0);
}
