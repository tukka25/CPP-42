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

#endif