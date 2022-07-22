// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX01_INCLUDES_SPAN_HPP_
#define EX01_INCLUDES_SPAN_HPP_

#include <exception>
#include <set>

class Span {
 public:
    explicit Span(unsigned int N);
    Span(const Span& src);
    Span& operator=(const Span& rhs);
    ~Span(void);
    unsigned int getN(void) const;
    std::multiset<int> getContainer(void) const;
    std::set<int>::iterator getFirst(void) const;
    std::set<int>::iterator getLast(void) const;
    void addNumber(int number);
    void addNumber(std::set<int>::iterator first, std::set<int>::iterator last);
    int shortestSpan(void);
    int longestSpan(void);
    class NoNumberStoredException : public std::exception {
     public:
        const char* what() const throw();
    };
    class OnlyOneNumberStoredException : public std::exception {
     public:
        const char* what() const throw();
    };
    class MaxNumberStoredException : public std::exception {
     public:
        const char* what() const throw();
    };

 private:
    Span(void);
    unsigned int _n;
    std::multiset<int> _container;
};

#endif  // EX01_INCLUDES_SPAN_HPP_
