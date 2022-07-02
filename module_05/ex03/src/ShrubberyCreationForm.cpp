// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <fstream>
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) {
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form("ShrubberyCreationForm", src.getSignGrade(), src.getExecuteGrade()) {
    *this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    this->setName(rhs.getName());
    this->setSignGrade(rhs.getSignGrade());
    this->setExecuteGrade(rhs.getExecuteGrade());
    this->setStatus(rhs.getStatus());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    std::string fileName;

    if (this->getStatus() == false)
        throw Form::NonSignedException();
    if (this->getExecuteGrade() < executor.getGrade())
        throw Form::GradeTooLowException();
    fileName = this->_target + "_shrubbery";
    std::ofstream newFile(fileName.c_str());

    newFile << "                    # #### ####" << std::endl
            << "                  ### \\/#|### |/####" << std::endl
            << "               ##\\/#/ \\||/##/_/##/_#" << std::endl
            << "            ###  \\/###|/ \\/ # ###" << std::endl
            << "           ##_\\_#\\_\\## | #/###_/_####" << std::endl
            << "          ## #### # \\ #| /  #### ##/##" << std::endl
            << "           __#_--###`  |{,###---###-~" << std::endl
            << "                     \\ }{" << std::endl
            << "                      }}{" << std::endl
            << "                      }}{" << std::endl
            << "                 ejm  {{}" << std::endl
            << "                , -=-~{ .-^- _" << std::endl
            << "                      `}" << std::endl
            << "                       {" << std::endl
            << std::endl;
    newFile.close();
}
