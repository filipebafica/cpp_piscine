// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main(void) {
    {
        Intern someRandomIntern;
        Bureaucrat b("bar", 1);
        {
            Form* rrf;
            try {
                rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
                b.signForm(rrf);
                rrf->execute(b);
                delete rrf;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
        {
            Form* rrf;
            try {
                rrf = someRandomIntern.makeForm("robotomy request", "Bender");
                b.signForm(rrf);
                rrf->execute(b);
                delete rrf;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
        {
            Form* rrf;
            try {
                rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
                b.signForm(rrf);
                rrf->execute(b);
                delete rrf;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
        {
            Form* rrf;
            try {
                rrf = someRandomIntern.makeForm("random", "Bender");
                b.signForm(rrf);
                rrf->execute(b);
                delete rrf;
            }
            catch(std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
    }
    return (0);
}
