// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Bureaucrat.hpp"

int main(void) {
    {
        std::cout << std::endl << "[TRYING TO INSTANCIATE WITH A TOO HIGH GRADE (0)]" << std::endl;
        try {
            Bureaucrat b("foo", 0);
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << "[TRYING TO INSTANCIATE WITH A TOO LOW GRADE (151)]" << std::endl;
        try {
            Bureaucrat b("foo", 151);
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << "[TRYING TO INCREMENT A TOO HIGH GRADE]" << std::endl;
        try {
            Bureaucrat b("foo", 1);
            std::cout << b << std::endl;
            b.incrementGrade();
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << "[TRYING TO DECREMENT A TOO LOW GRADE]" << std::endl;
        try {
            Bureaucrat b("foo", 150);
            std::cout << b << std::endl;
            b.decrementGrade();
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << "[INCREMENTING FROM 2 TO 1]" << std::endl;
        try {
            Bureaucrat b("foo", 2);
            std::cout << b << std::endl;
            b.incrementGrade();
            std::cout << b << std::endl;
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << "[DECREMENTING FROM 1 TO 2]" << std::endl;
        try {
            Bureaucrat b("foo", 1);
            std::cout << b << std::endl;
            b.decrementGrade();
            std::cout << b << std::endl;
        }
        catch(std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
