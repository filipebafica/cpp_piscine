// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <ctype.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Convert.hpp"

bool isPrintable(std::string argStr) {
    std::string::iterator it;

    for (it = argStr.begin(); it != argStr.end(); ++it) {
        if (!isprint(*it))
            return (false);
    }
    return (true);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Pass as argument a literal such as: a \\ 1.1f \\ 1.1 \\ 1" << std::endl;
        return (1);
    }
    if (!isPrintable(argv[1])) {
        std::cerr << "Argument is not printable" << std::endl;
        return (1);
    }
    Convert convert(argv[1]);
    if (convert.isCharType() == true)
        convert.convertAndPrint(convert.fromStringToChar());
    else if (convert.isIntType() == true)
        convert.convertAndPrint(convert.fromStringToInt());
    else if (convert.isFloatType() == true)
        convert.convertAndPrint(convert.fromStringToFloat());
    else if (convert.isDoubleType() == true)
        convert.convertAndPrint(convert.fromStringToDouble());
    return (0);
}
