// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main(void) {
    const Animal* d = new Dog();
    const Animal* c = new Cat();

    d->makeSound();
    c->makeSound();
    delete d;
    delete c;
    // Animal a();
    return (0);
}
