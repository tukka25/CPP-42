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
    // int         k = 0;
    // std::multiset<int>::iterator  t = this->arr.begin();

    // std::cout << "a = " << a << std::endl;
    if (i == max)
        throw (fullySet());
    this->arr.insert(a);
    if (i >= 1)
    {
        // std::cout << "w = " << *this->arr.begin() << std::endl;
        // for (int j = 0; j < i; j++)
        // {
        //     t++;
        //     k++;
        // }
        // k = (a - *--this->arr.end());
        // if (k < 0)
        //     k *= -1;
        // std::cout << "first = " << *----this->arr.end() << std::endl;
        // std::cout << "second = " << *--this->arr.end() << std::endl;
        // if (k < this->shortest)
        //     this->shortest = k;
    }
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
