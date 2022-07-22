// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "./MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) {
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& src) {
    *this = src;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& rhs) {
    this->_stack = rhs.getStack();
    return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(void) {
}

template<typename T>
std::deque<T> MutantStack<T>::getStack(void) const {
    return (this->_stack);
}

template<typename T>
bool MutantStack<T>::empty() const {
    return(this->_stack.empty());
}

template<typename T>
unsigned int MutantStack<T>::size(void) const {
    return (this->_stack.size());
}

template<typename T>
const T& MutantStack<T>::top(void) const {
    return (this->_stack.back());
}

template<typename T>
void MutantStack<T>::push(const T& val) {
    this->_stack.push_back(val);
}

template<typename T>
void MutantStack<T>::pop(void) {
    this->_stack.pop_back();
}

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::begin(void) {
    return (this->_stack.end());
}

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::end(void) {
    return (this->_stack.begin());
}
