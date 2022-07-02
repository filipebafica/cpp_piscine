// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form(void) : _name(""), _status(false), _signGrade(150), _executeGrade(150) {
}

Form::Form(const std::string& name, int signGrade, int executeGrade) :
                                                                        _name(name),
                                                                        _status(false),
                                                                        _signGrade(signGrade),
                                                                         _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src) : _name(""), _signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade()) {
    *this = src;
}

Form& Form::operator=(const Form& rhs) {
    const_cast<std::string&>(this->_name) = rhs.getName();
    const_cast<int&>(this->_signGrade) = rhs.getSignGrade();
    const_cast<int&>(this->_executeGrade) = rhs.getSignGrade();
    this->_status = rhs.getStatus();
    return (*this);
}

Form::~Form(void) {
}

std::string Form::getName(void) const {
    return (this->_name);
}

void Form::setName(std::string name) {
    const_cast<std::string&>(this->_name) = name;
}

bool Form::getStatus(void) const {
    return (this->_status);
}

void Form::setStatus(bool status) {
    const_cast<bool&>(this->_status) = status;
}

int Form::getSignGrade(void) const {
    return (this->_signGrade);
}

void Form::setSignGrade(int signGrade) {
    const_cast<int&>(this->_signGrade) = signGrade;
}

int Form::getExecuteGrade(void) const {
    return (this->_executeGrade);
}

void Form::setExecuteGrade(int executeGrade) {
    const_cast<int&>(this->_executeGrade) = executeGrade;
}

void Form::beSigned(Bureaucrat b) {
    if (this->_signGrade < b.getGrade())
        throw Form::GradeTooLowException();
    this->_status = true;
}

std::ostream& operator<<(std::ostream& o, const Form& f) {
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

const char* Form::GradeTooHighException::what() const throw() {
    return ("the grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("the grade is too low");
}

const char* Form::NonSignedException::what() const throw() {
    return ("the form is not signed");
}
