// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_FORM_HPP_
#define EX02_INCLUDES_FORM_HPP_

#include <string>
#include <exception>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form {
 public:
    Form(const std::string& name, int signGrade, int executeGrade);
    Form(const Form& src);
    Form& operator=(const Form& rhs);
    virtual ~Form(void);
    std::string getName(void) const;
    void setName(std::string name);
    bool getStatus(void) const;
    void setStatus(bool status);
    int getSignGrade(void) const;
    void setSignGrade(int signGrade);
    int getExecuteGrade(void) const;
    void setExecuteGrade(int executeGrade);
    void beSigned(Bureaucrat b);
    virtual void execute(Bureaucrat const& executor) const = 0;
    class GradeTooHighException : public std::exception {
     public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
     public:
            const char* what() const throw();
    };
    class NonSignedException : public std::exception {
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

#endif  // EX02_INCLUDES_FORM_HPP_
