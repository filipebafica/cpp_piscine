// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License

#include "../includes/iter.hpp"

int main(void) {
    {
        std::cout << "[ARRAY OF INTS]\n";
        int arr[] = {1, 2, 3, 4, 5};
        iter(arr, 5, &printArrElement);
    }
    {
        std::cout << "[ARRAY OF FLOATS]\n";
        float arr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
        iter(arr, 5, &printArrElement);
    }
    {
        std::cout << "[ARRAY OF DOUBLES]\n";
        double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
        iter(arr, 5, &printArrElement);
    }
    {
        std::cout << "[ARRAY OF CHARS]\n";
        char arr[] = {'a', 'b', 'c', 'd', 'e'};
        iter(arr, 5, &printArrElement);
    }
    return (0);
}
