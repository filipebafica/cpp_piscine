// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_MUTANTSTACK_HPP_
#define EX02_INCLUDES_MUTANTSTACK_HPP_

#include <exception>
#include <deque>

template<typename T>
class MutantStack {
 public:
    MutantStack(void);
    MutantStack(const MutantStack& src);
    MutantStack& operator=(const MutantStack& rhs);
    ~MutantStack(void);
    std::deque<T> getStack(void) const;
    bool empty() const;
    unsigned int size(void) const;
    const T& top(void) const;
    void push(const T& val);
    void pop(void);
    typename std::deque<T>::iterator begin(void);
    typename std::deque<T>::iterator end(void);

    typedef typename std::deque<T>::iterator iterator;

 private:
    std::deque<T> _stack;
};

#include "./MutantStack.tpp"

#endif  // EX02_INCLUDES_MUTANTSTACK_HPP_
