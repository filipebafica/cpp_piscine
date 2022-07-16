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
Array<T>::Array(const Array<T>& src) {
    
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
    // use size() to get the array length to copy every elemnt;
}

template<typename T>
Array<T>::~Array(void) {
    if (this->_arr != NULL)
        delete this->_arr;
}

template<typename T>
unsigned int Array<T>::size(void) const {
    // sizeof(arr)/sizeof(arr[0])
}
