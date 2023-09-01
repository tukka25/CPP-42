#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include "easyfind.tpp"

class EFind
{
    private:

    public:
        EFind();
        ~EFind();
};

template <typename T, typename I> void  easyfind(T a, I n);

class Error : public std::exception
{
        const char *what() const throw();
};

#endif