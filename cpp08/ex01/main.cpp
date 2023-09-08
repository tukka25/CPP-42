#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        Span tmp = sp;
        std::cout << "after copying" << std::endl;
        tmp.printt();
        std::cout << "----------------" << std::endl;
        std::cout << "sp = " << sp.shortestSpan() << std::endl;
        std::cout << "sp = " << sp.longestSpan() << std::endl;
        std::cout << "tmp = " << tmp.shortestSpan() << std::endl;
        std::cout << "tmp = " << tmp.longestSpan() << std::endl;
    
        std::multiset<int>  d;
        Span    tm = Span(100);
        for (int i = 0; i < 700; i++)
        {
            d.insert(i);
        }
        tm.ultimateAddNumber(d.begin(), d.end());
        tm.printt();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}