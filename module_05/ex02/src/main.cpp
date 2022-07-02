// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main(void) {
    {   std::cout << std::endl << "[CREATING A BUREAUCRATE 'BAR' WITH GRADE 150]" << std::endl;
        Bureaucrat b("bar", 150);
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'SHRUBBERY CREATION FORM']" << std::endl;
                AForm *f = new ShrubberyCreationForm("foo");
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'ROBOTO MY REQUEST FORM']" << std::endl;
                AForm *f = new RobotomyRequestForm("foo");
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'PRESIDENTIAL PARDON FORM']" << std::endl;
                AForm *f = new PresidentialPardonForm("foo");
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
    }
    {
        std::cout << std::endl << "[CREATING A BUREAUCRATE 'BAR' WITH GRADE 1]" << std::endl;
        Bureaucrat b("bar", 1);
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'SHRUBBERY CREATION FORM']" << std::endl;
                AForm *f = new ShrubberyCreationForm("foo");
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'ROBOTO MY REQUEST FORM']" << std::endl;
                AForm *f = new RobotomyRequestForm("foo");
                b.signForm(f);
                b.executeForm(*f);
                b.executeForm(*f);
                b.executeForm(*f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
        {
            try {
                std::cout << std::endl << "[TRYING TO SIGN 'PRESIDENTIAL PARDON FORM']" << std::endl;
                AForm *f = new PresidentialPardonForm("foo");
                b.signForm(f);
                b.executeForm(*f);
                delete f;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
    }
    return (0);
}
