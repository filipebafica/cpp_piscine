// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main(void) {
    {   std::cout << std::endl << "[CREATING A BUREAUCRATE 'BAR' WITH GRADE 150]" << std::endl;
        Bureaucrat b("bar", 150);
        Form *f = new ShrubberyCreationForm("foo");
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'SHRUBBERY CREATION FORM']" << std::endl;
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
                delete f;
            }
        }
        {
            Form *f = new RobotomyRequestForm("foo");
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'ROBOTO MY REQUEST FORM']" << std::endl;
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
                delete f;
            }
        }
        {
            Form *f = new PresidentialPardonForm("foo");
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'PRESIDENTIAL PARDON FORM']" << std::endl;
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
                delete f;
            }
        }
    }
    {
        std::cout << std::endl << "[CREATING A BUREAUCRATE 'BAR' WITH GRADE 1]" << std::endl;
        Bureaucrat b("bar", 1);
        Form *f = new ShrubberyCreationForm("foo");
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'SHRUBBERY CREATION FORM']" << std::endl;
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
                delete f;
            }
        }
        {
            Form *f = new RobotomyRequestForm("foo");
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'ROBOTO MY REQUEST FORM']" << std::endl;
                b.signForm(f);
                b.executeForm(*f);
                b.executeForm(*f);
                b.executeForm(*f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
                delete f;
            }
        }
        {
            Form *f = new PresidentialPardonForm("foo");
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'PRESIDENTIAL PARDON FORM']" << std::endl;
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
                delete f;
            }
        }
    }
    return (0);
}
