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
        ~MutantStack();
        typedef typename MutantStack<T>::container_type::iterator iterator;
        iterator begin()
        {
                return (this->c.begin());
        }
        iterator end()
        {
                return (this->c.end());
        }
};
#include "MutantStack.tpp"

#endif