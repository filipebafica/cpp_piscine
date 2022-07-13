// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Data.hpp"
typedef unsigned int* uintptr_t;

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

int main(void) {
    Data data;
    Data *dataPtr;
    uintptr_t basicPtr;

    data.memberOne = 10;
    data.memberTwo = 100;
    basicPtr = serialize(&data);
    dataPtr = deserialize(basicPtr);

    std::cout << "data memberOne: " << data.memberOne << std::endl
              << "data memberTwo: " << data.memberTwo << std::endl
              << "dataPtr memberOne: " << dataPtr->memberOne << std::endl
              << "dataPtr memberTwo: " << dataPtr->memberTwo << std::endl;

    return (0);
}
