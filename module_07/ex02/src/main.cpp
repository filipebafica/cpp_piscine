// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Array.hpp"

int main(void) {
    {
        std::cout << "[ARRAY OF INTS '[10, 20, 30]']\n";
        Array<int> arr(3);
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;

        for (int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << std::endl;
    }
    {
        std::cout << "[ARRAY OF FLOATS '[10.1, 20.2, 30.3]']\n";
        Array<float> arr(3);
        arr[0] = 10.1f;
        arr[1] = 20.2f;
        arr[2] = 30.3f;

        for (int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << std::endl;
    }
    {
        std::cout << "[ARRAY OF DOUBLES '[10.1, 20.2, 30.3]']\n";
        Array<double> arr(3);
        arr[0] = 10.1;
        arr[1] = 20.2;
        arr[2] = 30.3;

        for (int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << std::endl;
    }
    {
        std::cout << "[ARRAY OF CHARS '[a, b, c]']\n";
        Array<char> arr(3);
        arr[0] = 'a';
        arr[1] = 'b';
        arr[2] = 'c';

        for (int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << std::endl;
    }
    {
        std::cout << "[ACESSING OUT OF BOUNDS ELEMENT 'arr[10]']\n";
        Array<char> arr(3);
        arr[0] = 'a';
        arr[1] = 'b';
        arr[2] = 'c';

        try {
            arr[10];
        }
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
