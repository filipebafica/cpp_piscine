// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form("RobotomyRequestForm", src.getSignGrade(), src.getExecuteGrade()) {
    *this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
    this->setName(rhs.getName());
    this->setSignGrade(rhs.getSignGrade());
    this->setExecuteGrade(rhs.getExecuteGrade());
    this->setStatus(rhs.getStatus());
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    static int controller;

    if (this->getStatus() == false)
        throw Form::NonSignedException();
    if (this->getExecuteGrade() < executor.getGrade())
        throw Form::GradeTooLowException();

    if (controller == 0) {
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
        controller = 1;
    }
    else {
        std::cout << "robotomy failed" << std::endl;
        controller = 0;
    }
}
