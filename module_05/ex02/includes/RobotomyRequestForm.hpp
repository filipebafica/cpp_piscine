// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_ROBOTOMYREQUESTFORM_HPP_
#define EX02_INCLUDES_ROBOTOMYREQUESTFORM_HPP_

#include <string>
#include "./Form.hpp"

class RobotomyRequestForm : public Form {
 public:
    explicit RobotomyRequestForm(const std::string& name);
    RobotomyRequestForm(const RobotomyRequestForm& src);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
    ~RobotomyRequestForm(void);
 private:
    RobotomyRequestForm(void);
};

#endif  // EX02_INCLUDES_ROBOTOMYREQUESTFORM_HPP_
