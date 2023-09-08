#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <climits>
# include <cstdlib>
# include <set>

class Span
{
    private:
        std::multiset<int, std::greater<int> > arr;
        int max;
        int shortest;
    public:
        Span();
        Span(const Span &s);
        Span    &operator=(const Span & s);
        Span(unsigned int n);
        void    addNumber(int a);
        void    ultimateAddNumber(std::multiset<int>::iterator begin, std::multiset<int>::iterator end);
        void    printt(void);
        int     shortestSpan(void);
        int     longestSpan(void);
        ~Span();
};

class Error : public std::exception
{
        const char *what() const throw();
};

class fullySet : public std::exception
{
        const char *what() const throw();
};

class noSpan : public std::exception
{
        const char *what() const throw();
};

#endif