// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_BRAIN_HPP_
#define EX01_INCLUDES_BRAIN_HPP_

#include <string>

class Brain {
 public:
    Brain(void);
    Brain(const Brain& src);
    Brain& operator=(const Brain& rhs);
    ~Brain(void);

 private:
    std::string ideas[100];
};

#endif  // EX01_INCLUDES_BRAIN_HPP_
