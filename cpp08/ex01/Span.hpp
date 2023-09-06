#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <set>

class Span
{
    private:
        std::multiset<int, std::greater<int> > arr;
        int max;
        int shortest;
    public:
        Span();
        Span(unsigned int n);
        void    addNumber(int a);
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