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
    shortest = INT_MAX;
}

void    Span::addNumber(int a)
{
    static int i;
    std::multiset<int>::iterator  t = this->arr.begin();

    // std::cout << "t = " << *t << std::endl;
    if (i == max)
        throw (fullySet());
    this->arr.insert(a);
    if (i >= 1)
    {
        std::cout << "w = " << *this->arr.begin() << std::endl;
        for (int j = 0; j < i; j++)
            t++;
        this->shortest = *--t - *t;
    }
    std::cout << "this->" << this->shortest << std::endl;
    i++;
}

void    Span::printt(void)
{
    std::multiset<int>::iterator t;
    for (t = this->arr.begin(); t != arr.end(); t++)
    {
        std::cout << *t << std::endl;
    }
}

int Span::shortestSpan(void)
{
    if (this->arr.size() <= 1)
        throw (noSpan());
    return (*this->arr.begin() - *++this->arr.begin());
}

int Span::longestSpan(void)
{
    if (this->arr.size() <= 1)
        throw (noSpan());
    return (*this->arr.begin() - *--this->arr.end());
}

const char *Error::what() const throw ()
{
    return ("Cant allocate");
}

const char *fullySet::what() const throw ()
{
    return ("no more space");
}

const char *noSpan::what() const throw ()
{
    return ("Cant Find a Span");
}

Span::~Span()
{
    std::cout << "Default Destructor Called" << std::endl;
}
