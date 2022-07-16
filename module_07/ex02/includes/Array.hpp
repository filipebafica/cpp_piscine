// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_ARRAY_HPP_
#define EX02_INCLUDES_ARRAY_HPP_

template <typename T>
class Array {
 public:
    Array(void);
    Array(unsigned int n);
    Array(const Array& src);
    Array<T>& operator=(const Array<T>& rhs);
    T& operator[](int index) const;
    ~Array(void);
    int size(void) const;
    class OutOfBoundsException : public std::exception {
     public:
        const char* what() const throw();
    };

 private:
    T *_arr;
    int _arrSize;
};

#include "./Array.tpp"

#endif  // EX02_INCLUDES_ARRAY_HPP_
