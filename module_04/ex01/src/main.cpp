// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main(void) {
    std::cout << std::endl << "[LOOP TEST]" << std::endl << std::endl;
    Animal* arr[4];

    for (int i = 0; i < 4; ++i) {
        if (i < 2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }
    for (int i = 0; i < 4; ++i) {
        delete arr[i];
    }

    std::cout << std::endl << "[INDIVIDUAL TEST]" << std::endl << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
    return (0);
}
