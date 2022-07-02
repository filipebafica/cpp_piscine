// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm("PresidentialPardonForm", src.getSignGrade(), src.getExecuteGrade()) {
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
        throw AForm::NonSignedException();
    if (this->getExecuteGrade() < executor.getGrade())
        throw AForm::GradeTooLowException();

    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
