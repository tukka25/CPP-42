#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <stack>
# include <set>

template <class T>
class MutantStack : public std::stack<T>
{
    private:
        int max;
        int shortest;
    public:
        MutantStack();
        // MutantStack(unsigned int n);
        // void    addNumber(int a);
        // void    ultimateAddNumber(void);
        // void    printt(void);
        // int     shortestMutantStack(void);
        // int     longestMutantStack(void);
        ~MutantStack();
};
#include "MutantStack.tpp"

class Error : public std::exception
{
        const char *what() const throw();
};

class fullySet : public std::exception
{
        const char *what() const throw();
};

class noMutantStack : public std::exception
{
        const char *what() const throw();
};

#endif