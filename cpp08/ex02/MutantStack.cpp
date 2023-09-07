// # include "MutantStack.hpp"

// MutantStack::MutantStack()
// {
//     std::cout << "Default Contructor Called" << std::endl;
// }

// MutantStack::MutantStack(unsigned int n)
// {
//     std::cout << "Parameterized Contructor Called" << std::endl;
//     if (n == 0)
//         throw (Error());
//     this->max = n;
//     shortest = INT_MAX;
// }

// void    MutantStack::addNumber(int a)
// {
//     static int i;
//     if (i == max)
//         throw (fullySet());
//     this->arr.insert(a);
//     i++;
// }

// void    MutantStack::ultimateAddNumber(void)
// {
//     for (int i = 0;i < this->max;i++)
//         this->arr.insert(rand() / 5);    
// }

// void    MutantStack::printt(void)
// {
//     std::multiset<int>::iterator t;
//     for (t = this->arr.begin(); t != arr.end(); t++)
//     {
//         std::cout << *t << std::endl;
//     }
// }

// int MutantStack::shortestMutantStack(void)
// {
//     int tmp = 0;

//     if (this->arr.size() <= 1)
//         throw (noMutantStack());
//     std::multiset<int>::iterator t = ++this->arr.begin();
//     for (;t != this->arr.end(); t++)
//     {
//         tmp = *--t;
//         ++t;
//         if (tmp - *t < this->shortest)
//             this->shortest = tmp - *t;
//     }
//     return (this->shortest);
// }

// int MutantStack::longestMutantStack(void)
// {
//     if (this->arr.size() <= 1)
//         throw (noMutantStack());
//     return (*this->arr.begin() - *--this->arr.end());
// }

// const char *Error::what() const throw ()
// {
//     return ("Cant allocate");
// }

// const char *fullySet::what() const throw ()
// {
//     return ("no more space");
// }

// const char *noMutantStack::what() const throw ()
// {
//     return ("Cant Find a MutantStack");
// }

// MutantStack::~MutantStack()
// {
//     std::cout << "Default Destructor Called" << std::endl;
// }
