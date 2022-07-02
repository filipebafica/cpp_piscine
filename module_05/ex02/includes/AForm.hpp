// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_AFORM_HPP_
#define EX02_INCLUDES_AFORM_HPP_

#include <string>
#include <exception>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm {
 public:
    AForm(const std::string& name, int signGrade, int executeGrade);
    AForm(const AForm& src);
    AForm& operator=(const AForm& rhs);
    virtual ~AForm(void);
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
    AForm(void);
    std::string const _name;
    bool _status;
    const int _signGrade, _executeGrade;
};

std::ostream& operator<<(std::ostream& o, const AForm& f);

#endif  // EX02_INCLUDES_AFORM_HPP_
