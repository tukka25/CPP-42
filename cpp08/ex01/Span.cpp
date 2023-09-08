# include "Span.hpp"

Span::Span()
{
    std::cout << "Default Contructor Called" << std::endl;
}

Span::Span(const Span &s)
{
    *this = s;
    std::cout << "Copy Contructor Called" << std::endl;
}

Span    &Span::operator=(const Span & s)
{
    if (s.arr.empty() || this == &s)
    {
        return (*this);
    }
    std::multiset<int>::iterator it;

    for (it = s.arr.begin(); it != s.arr.end(); it++)
    {
        this->arr.insert(*it);
    }
    this->shortest = INT_MAX;
    return (*this);
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
    if (i == max)
        throw (fullySet());
    this->arr.insert(a);
    i++;
}

void    Span::ultimateAddNumber(std::multiset<int>::iterator begin, std::multiset<int>::iterator end)
{
    int i = 0;

    for (;begin != end && i < this->max;begin++)
    {
        this->arr.insert(*begin);
        i++;
    }
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
    int tmp = 0;

    if (this->arr.size() <= 1)
        throw (noSpan());
    std::multiset<int>::iterator t = ++this->arr.begin();
    for (;t != this->arr.end(); t++)
    {
        tmp = *--t;
        ++t;
        if (tmp - *t < this->shortest)
            this->shortest = tmp - *t;
    }
    return (this->shortest);
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
