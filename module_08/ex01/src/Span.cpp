// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/Span.hpp"
#include <iostream>
#include <iterator>
#include <numeric>
#include <algorithm>

Span::Span(void) {
}

Span::Span(unsigned int N) {
    this->_n = N;
}

Span::Span(const Span& src) {
    *this = src;
}

Span& Span::operator=(const Span& rhs) {
    this->_n = rhs.getN();
    this->_container = rhs.getContainer();
    return (*this);
}

Span::~Span(void) {
}

unsigned int Span::getN(void) const {
    return (this->_n);
}

std::multiset<int> Span::getContainer(void) const {
    return (this->_container);
}

std::multiset<int>::iterator Span::getFirst(void) const {
    return (this->_container.begin());
}

std::multiset<int>::iterator Span::getLast(void) const {
    return (this->_container.end());
}

void Span::addNumber(int number) {
    if (this->_container.size() >= this->_n)
        throw Span::MaxNumberStoredException();
    this->_container.insert(number);
}

void Span::addNumber(std::multiset<int>::iterator first, std::multiset<int>::iterator last, unsigned int N) {
    if (this->_n < N)
        throw Span::MaxNumberStoredException();
    this->_container.insert(first, last);
}

int Span::shortestSpan() {
    if (this->_container.empty())
        throw Span::NoNumberStoredException();
    else if (this->_container.size() == 1)
        throw Span::OnlyOneNumberStoredException();

    int tmp[this->_container.size()];
    std::adjacent_difference(this->_container.begin(), this->_container.end(), tmp);

    return(*std::min_element(tmp + 1, tmp + this->_container.size()));
}

int Span::longestSpan() {
    if (this->_container.empty())
        throw Span::NoNumberStoredException();
    else if (this->_container.size() == 1)
        throw Span::OnlyOneNumberStoredException();

    return(*--this->_container.end() - *this->_container.begin());
}

const char* Span::NoNumberStoredException::what() const throw() {
    return ("There are no numbers stored");
}

const char* Span::OnlyOneNumberStoredException::what() const throw() {
    return ("There is only one number stored");
}

const char* Span::MaxNumberStoredException::what() const throw() {
    return ("Max number stored reached");
}
