# include "Span.hpp"

Span::Span()
{
    std::cout << "Default Contructor Called" << std::endl;
}

Span::Span(unsigned int n)
{
    std::cout << "Parameterized Contructor Called" << std::endl;
    if (n == 0)
        throw (Error());
    this->max = n;
}

const char *Error::what() const throw ()
{
    return ("Cant allocate");
}

void    Span::addNumber(int a)
{
    
}

Span::~Span()
{
    std::cout << "Default Destructor Called" << std::endl;
}
