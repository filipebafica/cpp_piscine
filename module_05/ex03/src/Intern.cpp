// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern(void) {
}

Intern::Intern(const Intern& src) {
    *this = src;
}

Intern& Intern::operator=(const Intern& rhs) {
    (void)rhs;
    return (*this);
}

Intern::~Intern(void) {
}

Form* Intern::makeForm(std::string name, std::string target) {
    Form* (Intern::*internMembFn[])(std::string target) = {
        &Intern::makePresidentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm,
    };
    std::string FnName[] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation",
    };
    for (int i = 0; i < 3; ++i) {
        if (!FnName[i].compare(name)) {
            return(this->*internMembFn[i])(target);
        }
    }
    throw Intern::InvalidFormException();
}

Form* Intern::makePresidentialPardonForm(std::string target) {
    return (new PresidentialPardonForm(target));
}

Form* Intern::makeRobotomyRequestForm(std::string target) {
    return (new RobotomyRequestForm(target));
}
Form* Intern::makeShrubberyCreationForm(std::string target) {
    return (new ShrubberyCreationForm(target));
}

const char* Intern::InvalidFormException::what() const throw() {
    return ("invalid form");
}
