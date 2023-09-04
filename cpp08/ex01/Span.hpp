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
    public:
        Span();
        Span(unsigned int n);
        void    addNumber(int a);
        ~Span();
};

struct list 
{
        struct  list *prev;
        struct  list *next;
        int     content;
};

// template <typename T, int N> void  easyfind(T a, int n);

class Error : public std::exception
{
        const char *what() const throw();
};

#endif