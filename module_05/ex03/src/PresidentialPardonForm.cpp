// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : Form("PresidentialPardonForm", src.getSignGrade(), src.getExecuteGrade()) {
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

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    if (this->getStatus() == false)
        throw Form::NonSignedException();
    if (this->getExecuteGrade() < executor.getGrade())
        throw Form::GradeTooLowException();

    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
