// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX03_INCLUDES_ROBOTOMYREQUESTFORM_HPP_
#define EX03_INCLUDES_ROBOTOMYREQUESTFORM_HPP_

#include <string>
#include "./Form.hpp"

class RobotomyRequestForm : public Form {
 public:
    explicit RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& src);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
    ~RobotomyRequestForm(void);
    void execute(Bureaucrat const& executor) const;
 private:
    RobotomyRequestForm(void);
    std::string _target;
};

#endif  // EX03_INCLUDES_ROBOTOMYREQUESTFORM_HPP_
