// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("") {
    std::cout << "Default constructor called for a Bureaucrat object" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "String constructor called for a Bureaucrat object" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(NULL) {
    std::cout << "Copy constructor called for a Bureaucrat object" << std::endl;
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    std::cout << "Copy assignment operator called for a Bureaucrat object" << std::endl;
    const_cast<std::string&>(this->_name) = rhs.getName();
    this->_grade = rhs.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Default destructor called for a Bureaucrat object" << std::endl;
}

std::string Bureaucrat::getName(void) const {
    return (this->_name);
}
int Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

void Bureaucrat::incrementGrade(void) {
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
    std::cout << "Grade was incremented" << std::endl;
}

void Bureaucrat::decrementGrade(void) {
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += 1;
    std::cout << "Grade was decremented" << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat) {
    o << bureaucrat.getName()
      << ", "
      << "bureaucrat grade "
      << bureaucrat.getGrade();
    return (o);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("The grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("The grade is too low");
}
