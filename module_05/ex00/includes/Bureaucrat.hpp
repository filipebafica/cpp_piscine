// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_BUREAUCRAT_HPP_
#define EX00_INCLUDES_BUREAUCRAT_HPP_

#include <string>
#include <exception>

class Bureaucrat {
 public:
    Bureaucrat(std::string const& name, int grade);
    Bureaucrat(Bureaucrat const& src);
    Bureaucrat& operator=(Bureaucrat const& rhs);
    ~Bureaucrat(void);
    std::string getName(void) const;
    int getGrade(void) const;
    class GradeTooHighException : public std::exception {
     public:
            const char* what() const throw();
    };

 private:
    Bureaucrat(void);
    std::string const _name;
    int grade;
};
#endif  // EX00_INCLUDES_BUREAUCRAT_HPP_
