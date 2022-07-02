// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main(void) {
    {
        try {
            std::cout << std::endl << "[CREATING A BUREAUCRATE WITH GRADE 10 AND A FORM WITH GRADE 1]" << std::endl;
            Bureaucrat b("foo", 10);
            Form f("bar", 1, 1);
            std::cout << b << std::endl;
            std::cout << f << std::endl;

            std::cout << std::endl << "[TRYING TO SIGN FORM]" << std::endl;
            b.signForm(f);
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try {
            std::cout << std::endl << "[CREATING A BUREAUCRATE WITH GRADE 10 AND A FORM WITH GRADE 11]" << std::endl;
            Bureaucrat b("foo", 10);
            Form f("bar", 11, 11);
            std::cout << b << std::endl;
            std::cout << f << std::endl;

            std::cout << std::endl << "[TRYING TO SIGN FORM]" << std::endl;
            b.signForm(f);
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
