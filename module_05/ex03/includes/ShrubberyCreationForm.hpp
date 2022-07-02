// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_SHRUBBERYCREATIONFORM_HPP_
#define EX03_INCLUDES_SHRUBBERYCREATIONFORM_HPP_

#include <string>
#include "./Form.hpp"
#include "./Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
 public:
    explicit ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
    ~ShrubberyCreationForm(void);
    void execute(Bureaucrat const& executor) const;
 private:
    ShrubberyCreationForm(void);
    std::string _target;
};


#endif  // EX03_INCLUDES_SHRUBBERYCREATIONFORM_HPP_
