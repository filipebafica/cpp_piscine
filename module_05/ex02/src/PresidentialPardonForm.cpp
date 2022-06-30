// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& name) : Form(name, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : Form("", src.getSignGrade(), src.getExecuteGrade()) {
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    this->setName(rhs.getName());
    this->setSignGrade(rhs.getSignGrade());
    this->setExecuteGrade(rhs.getExecuteGrade());
    this->setStatus(rhs.getStatus());
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}
