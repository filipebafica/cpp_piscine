// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "../includes/easyfind.hpp"

int main(void) {
    {
        std::cout << "[TRYING TO FIND '1' IN VECTOR OF INTS '[1, 2, 3]']\n";
        std::vector<int> container;

        for (int i = 1; i <= 3; ++i)
            container.push_back(i);

        easyfind(container, 1);
    }
    {
        std::cout << "[TRYING TO FIND '10' IN VECTOR OF INTS '[1, 2, 3]']\n";
        std::vector<int> container;

        for (int i = 1; i <= 3; ++i)
            container.push_back(i);

        easyfind(container, 10);
    }
    {
        std::cout << "[TRYING TO FIND '2' IN DEQUE OF INTS '[1, 2, 3]']\n";
        std::deque<int> container;

        for (int i = 1; i <= 3; ++i)
            container.push_back(i);

        easyfind(container, 2);
    }
    {
        std::cout << "[TRYING TO FIND '3' IN LIST OF INTS '[1, 2, 3]']\n";
        std::list<int> container;

        for (int i = 1; i <= 3; ++i)
            container.push_back(i);

        easyfind(container, 3);
    }
    return (0);
}
