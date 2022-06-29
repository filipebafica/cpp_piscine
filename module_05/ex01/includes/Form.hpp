// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_FORM_HPP_
#define EX01_INCLUDES_FORM_HPP_

#include <string>
#include <exception>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form {
 public:
    Form(const std::string& name, int signGrade, int executeGrade);
    Form(const Form& src);
    Form& operator=(const Form& rhs);
    Form& operator<<(const Form& rhs);
    ~Form(void);
    std::string getName(void) const;
    bool getStatus(void) const;
    int getSignGrade(void) const;
    int getExecuteGrade(void) const;
    void beSigned(Bureaucrat b);
    class GradeTooHighException : public std::exception {
     public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
     public:
            const char* what() const throw();
    };

 private:
    Form(void);
    std::string const _name;
    bool _status;
    const int _signGrade, _executeGrade;
};

std::ostream& operator<<(std::ostream& o, const Form& f);

#endif  // EX01_INCLUDES_FORM_HPP_
