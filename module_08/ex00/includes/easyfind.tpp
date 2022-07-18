// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <algorithm>
#include "./easyfind.hpp"

template<class T>
void easyfind(T& container, int f) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), f);
    if (it != container.end())
        std::cout << "Element found in container" << std::endl;
    else
        std::cout << "Element not found in container" << std::endl;
}
