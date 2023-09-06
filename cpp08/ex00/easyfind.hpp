#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include "easyfind.tpp"

class EFind
{
    private:

    public:
        EFind();
        ~EFind();
};

struct list 
{
        struct  list *prev;
        struct  list *next;
        int     content;
};

template <typename T, int N> void  easyfind(T a, int n);

class Error : public std::exception
{
        const char *what() const throw();
};

#endif