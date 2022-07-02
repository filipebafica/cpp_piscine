// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_PRESIDENTIALPARDONFORM_HPP_
#define EX02_INCLUDES_PRESIDENTIALPARDONFORM_HPP_

#include <string>
#include "./AForm.hpp"

class PresidentialPardonForm : public AForm {
 public:
    explicit PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& src);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
    ~PresidentialPardonForm(void);
    void execute(Bureaucrat const& executor) const;

 private:
    PresidentialPardonForm(void);
    std::string _target;
};

#endif  // EX02_INCLUDES_PRESIDENTIALPARDONFORM_HPP_
