// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_PRESIDENTIALPARDONFORM_HPP_
#define EX02_INCLUDES_PRESIDENTIALPARDONFORM_HPP_

#include <string>
#include "./Form.hpp"

class PresidentialPardonForm : public Form {
 public:
    explicit PresidentialPardonForm(const Form& target);
    PresidentialPardonForm(const PresidentialPardonForm& src);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
    ~PresidentialPardonForm(void);
 private:
    PresidentialPardonForm(void);
};

#endif  // EX02_INCLUDES_PRESIDENTIALPARDONFORM_HPP_
