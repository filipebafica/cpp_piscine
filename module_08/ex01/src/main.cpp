// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include <iostream>
#include "../includes/Span.hpp"

int main(void) {
    {
        std::cout << "[ADDING 10 000 NUMBERS]\n";
        Span s1(10000);
        for (int i = 0; i < 10000; ++i)
            s1.addNumber(i);

        std::cout << "first: " << *s1.getFirst() << std::endl;
        std::cout << "last: " << *--s1.getLast() << std::endl;
    }
    {
        std::cout << "[ADDING 10 000 NUMBERS WITH RANGE OF ITERATORS]\n";
        Span s1(10000);
        for (int i = 0; i < 10000; ++i)
            s1.addNumber(i);

        Span s2(s1.getN());
        s2.addNumber(s1.getFirst(), s1.getLast(), s1.getN());
        std::cout << "first: " << *(++s2.getFirst()) << std::endl;
        std::cout << "last: " << *--s2.getLast() << std::endl;
    }
    {
        std::cout << "[TRAYING TO ADD MORE NUMBERS THAN THE SIZE LIMIT]\n";
        Span s1(10);
        try {
            for (int i = 0; i < 11; ++i)
                s1.addNumber(i);
        }
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "[SHORTEST SPAN]\n";
        Span s1(10);
        for (int i = 0; i < 10; ++i)
            s1.addNumber(i);

        std::cout << s1.shortestSpan() << std::endl;
    }
    {
        std::cout << "[LONGEST SPAN]\n";
        Span s1(10000);
        for (int i = 0; i < 10000; ++i)
            s1.addNumber(i);

        std::cout << s1.longestSpan() << std::endl;
    }
    {
        std::cout << "[SUBJECT TEST]\n";
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    return (0);
}
