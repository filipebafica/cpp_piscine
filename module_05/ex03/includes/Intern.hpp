// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_INTERN_HPP_
#define EX03_INCLUDES_INTERN_HPP_

#include <string>
#include <exception>
#include "./Form.hpp"

class Intern {
 public:
    Intern(void);
    Intern(const Intern& src);
    Intern& operator=(const Intern& rhs);
    ~Intern(void);
    Form *makeForm(std::string name, std::string target);
    Form *makePresidentialPardonForm(std::string target);
    Form *makeRobotomyRequestForm(std::string target);
    Form *makeShrubberyCreationForm(std::string target);
    class InvalidFormException : public std::exception {
     public:
            const char* what() const throw();
    };
};

#endif  // EX03_INCLUDES_INTERN_HPP_
