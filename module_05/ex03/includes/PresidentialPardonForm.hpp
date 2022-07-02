// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_PRESIDENTIALPARDONFORM_HPP_
#define EX03_INCLUDES_PRESIDENTIALPARDONFORM_HPP_

#include <string>
#include "./Form.hpp"

class PresidentialPardonForm : public Form {
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

#endif  // EX03_INCLUDES_PRESIDENTIALPARDONFORM_HPP_
