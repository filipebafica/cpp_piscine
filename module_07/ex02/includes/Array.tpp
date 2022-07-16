// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/Array.hpp"

template<typename T>
Array<T>::Array(void) {
    this->_arr = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n) {
    this->_arr = new T [n];
}

template<typename T>
Array<T>::Array(const Array& src) {
    
}

template<typename T>
Array& Array<T>::operator(const Array& rhs) {
    
}

template<typename T>
Array<T>::~Array(void) {
    if (this->_arr != NULL)
        delete this->_arr;
}
