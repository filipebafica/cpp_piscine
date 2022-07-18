// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "./Array.hpp"

template<typename T>
Array<T>::Array(void) : _arr(NULL), _arrSize(0) {
}

template<typename T>
Array<T>::Array(unsigned int n) {
    this->_arrSize = n;
    this->_arr = new T[n];
}

template<typename T>
Array<T>::Array(const Array<T>& src) {
    *this = src;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
    this->_arrSize = rhs.size();
    delete[] this->_arr;
    this->_arr = new T[this->_arrSize];
    for (int i = 0; i < this->_arrSize; ++i)
        this->_arr[i] = rhs[i];
    return (*this);
}

template<typename T>
T& Array<T>::operator[](int index) const {
    if (index >= this->size() || index < 0)
        throw Array<T>::OutOfBoundsException();
    return (this->_arr[index]);
}

template<typename T>
Array<T>::~Array(void) {
    if (this->_arr != NULL)
        delete[] this->_arr;
}

template<typename T>
int Array<T>::size(void) const {
    return (this->_arrSize);
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
    return ("Selection is out of bounds");
}
