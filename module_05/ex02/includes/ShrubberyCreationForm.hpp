// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_SHRUBBERYCREATIONFORM_HPP_
#define EX02_INCLUDES_SHRUBBERYCREATIONFORM_HPP_

#include <string>
#include "./AForm.hpp"
#include "./Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
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


#endif  // EX02_INCLUDES_SHRUBBERYCREATIONFORM_HPP_
