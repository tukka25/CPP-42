#ifndef MUSTANTSTACK_TPP
# define MUSTANTSTACK_TPP

template <class T>
MutantStack<T>::MutantStack()
{
    std::cout << "Default Constructor Called" << std::endl;
    // this->push(10);
}

template <class T>
MutantStack<T>::~MutantStack()
{
    std::cout << "Default Destructor Called" << std::endl;
}

// typedef typename container::iterator iterator;
// iterator begin()
// {
//     return (this->c.begin());
// }
// iterator end()
// {
//     return (this->c.end());
// }
#endif