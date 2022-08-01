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
        A a = dynamic_cast<A&>(p);
        std::cout << "'Base& p' is a class of type A" << std::endl;
    }
    catch (std::exception& e) {}
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "'Base& p' is a class of type B" << std::endl;
    }
    catch (std::exception& e) {}
    try {
        C c = dynamic_cast<C&>(p);
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
    Base *randomInstance = NULL;
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

    p = generate();
    identify(p);
    identify(*p);
    delete p;
    return (0);
}
