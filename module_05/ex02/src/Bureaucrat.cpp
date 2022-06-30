// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("") {
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name("") {
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    const_cast<std::string&>(this->_name) = rhs.getName();
    this->_grade = rhs.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void) {
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

void Bureaucrat::signForm(Form f) const {
    if (this->getGrade() > f.getSignGrade()) {
    std::cout << this->_name
              << " couldn't sign "
              << f.getName()
              << " because ";
    } else {
        std::cout << this->_name
                << " signed "
                << f.getName()
                << std::endl;
    }
    f.beSigned(*this);
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
    o << b.getName()
      << ", "
      << "bureaucrat grade "
      << b.getGrade();
    return (o);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("the grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("the grade is too low");
}
