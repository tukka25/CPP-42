#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include "easyfind.tpp"

class Span
{
    private:

    public:
        Span();
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