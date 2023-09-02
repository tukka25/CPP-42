#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include "easyfind.tpp"

class EFind
{
    private:

    public:
        EFind();
        ~EFind();
};

template <typename T, int N> void  easyfind(T a, int n);

class Error : public std::exception
{
        const char *what() const throw();
};

#endif