// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat b("foo", 0);
    }
    catch(Bureaucrat::GradeTooHighException& e) {
        (void)e;
        std::cout << "hello world!" << std::endl;
    }
    return (0);
}
