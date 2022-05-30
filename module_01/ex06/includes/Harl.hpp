// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX06_INCLUDES_HARL_HPP_
#define EX06_INCLUDES_HARL_HPP_

#include <string>

class Harl {
 public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);

 private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif  // EX06_INCLUDES_HARL_HPP_
