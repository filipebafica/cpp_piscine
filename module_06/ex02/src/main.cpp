// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

void identify(Base& p) {
    try {
        dynamic_cast<A&>(p);
        std::cout << "'Base& p' is a class of type A" << std::endl;
    }
    catch (std::exception& e) {}
    try {
        dynamic_cast<B&>(p);
        std::cout << "'Base& p' is a class of type B" << std::endl;
    }
    catch (std::exception& e) {}
    try {
        dynamic_cast<C&>(p);
        std::cout << "'Base& p' is a class of type C" << std::endl;
    }
    catch (std::exception& e) {}
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "'Base* p' is a class of type A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "'Base* p' is a class of type B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "'Base* p' is a class of type C" << std::endl;
}

Base *generate(void) {
    Base *randomInstance;
    int randomNumber;
    srand(time(NULL));

    randomNumber = rand() % 3 + 1;
    switch (randomNumber) {
        case 1:
            randomInstance = new A();
            std::cout << "class 'A' generated" << std::endl;
            break;
        case 2:
            randomInstance = new B();
            std::cout << "class 'B' generated" << std::endl;
            break;
        case 3:
            randomInstance = new C();
            std::cout << "class 'C' generated" << std::endl;
            break;
        default:
            break;
    }
    return (randomInstance);
}

int main(void) {
    Base *p;
    Base p2 = B();

    p = generate();
    identify(p);
    identify(*p);
    return (0);
}
