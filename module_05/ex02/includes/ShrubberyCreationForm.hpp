// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_SHRUBBERYCREATIONFORM_HPP_
#define EX02_INCLUDES_SHRUBBERYCREATIONFORM_HPP_

#include <string>
#include "./Form.hpp"

class ShrubberyCreationForm : public Form {
 public:
    explicit ShrubberyCreationForm(const std::string& name);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
    ~ShrubberyCreationForm(void);
 private:
    ShrubberyCreationForm(void);
};


#endif  // EX02_INCLUDES_SHRUBBERYCREATIONFORM_HPP_
