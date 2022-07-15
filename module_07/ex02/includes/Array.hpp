// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX02_INCLUDES_ARRAY_HPP_
#define EX02_INCLUDES_ARRAY_HPP_

template <typename T>
class Array {
 public:
    Array(void);
    Array(unsigned int n);
    Array(const Array& src);
    Array& operator=(const Array& rhs);
    ~Array(void);
    unsigned int size(void) const;
 private:
    T *_arr;
};
#endif  // EX02_INCLUDES_ARRAY_HPP_
