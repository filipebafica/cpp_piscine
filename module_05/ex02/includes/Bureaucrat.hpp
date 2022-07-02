// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_BUREAUCRAT_HPP_
#define EX02_INCLUDES_BUREAUCRAT_HPP_

#include <string>
#include <exception>
#include "./AForm.hpp"

class AForm;

class Bureaucrat {
 public:
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat& operator=(const Bureaucrat& rhs);
    ~Bureaucrat(void);
    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(AForm *f) const;
    void executeForm(AForm const& form);
    class GradeTooHighException : public std::exception {
     public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
     public:
            const char* what() const throw();
    };

 private:
    Bureaucrat(void);
    std::string const _name;
    int _grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif  // EX02_INCLUDES_BUREAUCRAT_HPP_
