// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm(void) : _name(""), _status(false), _signGrade(150), _executeGrade(150) {
}

AForm::AForm(const std::string& name, int signGrade, int executeGrade) :
                                                                        _name(name),
                                                                        _status(false),
                                                                        _signGrade(signGrade),
                                                                         _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw AForm::GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src) : _name(""), _signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade()) {
    *this = src;
}

AForm& AForm::operator=(const AForm& rhs) {
    const_cast<std::string&>(this->_name) = rhs.getName();
    const_cast<int&>(this->_signGrade) = rhs.getSignGrade();
    const_cast<int&>(this->_executeGrade) = rhs.getSignGrade();
    this->_status = rhs.getStatus();
    return (*this);
}

AForm::~AForm(void) {
}

std::string AForm::getName(void) const {
    return (this->_name);
}

void AForm::setName(std::string name) {
    const_cast<std::string&>(this->_name) = name;
}

bool AForm::getStatus(void) const {
    return (this->_status);
}

void AForm::setStatus(bool status) {
    const_cast<bool&>(this->_status) = status;
}

int AForm::getSignGrade(void) const {
    return (this->_signGrade);
}

void AForm::setSignGrade(int signGrade) {
    const_cast<int&>(this->_signGrade) = signGrade;
}

int AForm::getExecuteGrade(void) const {
    return (this->_executeGrade);
}

void AForm::setExecuteGrade(int executeGrade) {
    const_cast<int&>(this->_executeGrade) = executeGrade;
}

void AForm::beSigned(Bureaucrat b) {
    if (this->_signGrade < b.getGrade())
        throw AForm::GradeTooLowException();
    this->_status = true;
}

std::ostream& operator<<(std::ostream& o, const AForm& f) {
    o << "form name: "
      << f.getName()
      << ". "
      << "form sign grade: "
      << f.getSignGrade()
      << "."
      << " form execute grade: "
      << f.getExecuteGrade()
      << ".";
    return (o);
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("the grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("the grade is too low");
}

const char* AForm::NonSignedException::what() const throw() {
    return ("the form is not signed");
}
