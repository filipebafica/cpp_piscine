// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("") {
    std::cout << "Default constructor called for an Bureaucrat object" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name), grade(grade) {
    std::cout << "String constructor called for an Bureaucrat object" << std::endl;
    if (grade != 0)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(NULL) {
    std::cout << "Copy constructor called for an Bureaucrat object" << std::endl;
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    std::cout << "Copy assignment operator called for an Bureaucrat object" << std::endl;
    const_cast<std::string&>(this->_name) = rhs.getName();
    this->grade = rhs.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Default destructor called for an Bureaucrat object" << std::endl;
}

std::string Bureaucrat::getName(void) const {
    return ("x");
}
int Bureaucrat::getGrade(void) const {
    return (0);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Testing error");
}
