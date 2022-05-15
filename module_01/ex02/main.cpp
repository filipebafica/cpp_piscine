// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <string>

int main(void) {
    std::string myString = "HI THIS IS BRAIN";
    std::string *stringPTR = &myString;
    std::string &stringREF = myString;

    std::cout
        << &myString << std::endl
        << stringPTR << std::endl
        << &stringREF << std::endl
        << myString << std::endl
        << *stringPTR << std::endl
        << stringREF << std::endl;
    return (0);
}
