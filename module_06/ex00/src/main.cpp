// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <ctype.h>
#include <math.h>
#include <cstring>
#include <iostream>

bool isFloatType(std::string argStr) {
    std::string::iterator it;

    // check if there is only 'digit' '.' 'f'
    for (it = argStr.begin(); it != argStr.end(); ++it) {
        if (!isdigit(*it) && *it != '.' && *it != 'f')
            return (false);
    }
    // check if string ends with a f
    if (*(argStr.end() - 1) != 'f')
        return (false);
    // check if there is more than '.' charactere
    if (argStr.find_first_of('.') != argStr.find_last_of('.'))
        return (false);
    return (true);
}

bool isIntType(std::string argStr) {
    std::string::iterator it;

    for (it = argStr.begin(); it != argStr.end(); ++it) {
        if (!isdigit(*it))
            return (false);
    }
    return (true);
}

void getTypeAndConvert(char *s) {
    std::string argStr;

    argStr = s;
    isFloatType(argStr);
    std::cout << isFloatType(argStr) << std::endl;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Bad number of arguments" << std::endl;
        return (1);
    }
    getTypeAndConvert(argv[1]);
    return (0);
}
