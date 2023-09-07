#include "MutantStack.hpp"

int main()
{
    std::stack<int> s;
    s.push(21);
    s.push(22);
    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    // try
    // {
    //     Span sp = Span(5);
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(9);
    //     sp.addNumber(11);
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    
}