// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main(void) {
    {
        MutantStack<int> mstack;

        // -------------------- TOP TEST -------------------- //
        std::cout << "[TOP TEST STACK==[17, 5]]" << std::endl;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;


        // -------------------- POP TEST -------------------- //
        std::cout << "[POP TEST STACK==[5]]" << std::endl;
        mstack.pop();
        std::cout << mstack.top() << std::endl;


        // -------------------- SIZE TEST -------------------- //
        std::cout << "[SIZE TEST STACK==[5]]" << std::endl;
        std::cout << mstack.size() << std::endl;


        // -------------------- ITERATOR TEST -------------------- //
        std::cout << "[ITERATOR TEST STACK==[0 ,737, 5, 3, 5]]" << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        // -------------------- LIST - TOP TEST -------------------- //
        std::cout << std::endl << "[LIST - TOP TEST STACK==[17, 5]]" << std::endl;
        std::list<int> mstack;
        mstack.push_front(5);
        mstack.push_front(17);
        std::cout << mstack.front() << std::endl;


        // -------------------- LIST - POP TEST -------------------- //
        std::cout << "[LIST - POP TEST STACK==[5]]" << std::endl;
        mstack.pop_front();
        std::cout << mstack.front() << std::endl;


        // -------------------- LIST SIZE TEST -------------------- //
        std::cout << "[LIST - SIZE TEST STACK==[5]]" << std::endl;
        std::cout << mstack.size() << std::endl;


        // -------------------- LIST - ITERATOR TEST -------------------- //
        std::cout << "[LIST - ITERATOR TEST STACK==[0 ,737, 5, 3, 5]]" << std::endl;
        mstack.push_front(3);
        mstack.push_front(5);
        mstack.push_front(737);
        mstack.push_front(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack);
    }
    return (0);
}
