#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("tukka")
{
    std::cout << "Default Constructor Called" << std::endl;
    this->grade = 0;
}

Bureaucrat::Bureaucrat(int grade2) :name("tukka")
{
    if (grade2 < 0)
        throw (BExceptionHigh());
    if (grade2 > 150)
        throw (BExceptionLow());
    std::cout << "Default Constructor Called" << std::endl;
    this->grade = grade2;
}

void    Bureaucrat::increment(int amount)
{
    if (this->grade - amount < 1)
        throw (BExceptionIncr());
    this->grade -= amount;
}

void    Bureaucrat::decrement(int amount)
{
    if (this->grade + amount > 150)
        throw (BExceptionDec());
    this->grade += amount;
}

std::string    Bureaucrat::getName(void) const
{
    return (this->name);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b2)
{
    os << b2.getName() << ", bureaucrat grade " << b2.getGrade();
    return (os);
}

const char* BExceptionHigh::what() const throw()
{
    return (" Bureaucrat::GradeTooHighException");
}

const char* BExceptionLow::what() const throw()
{
    return (" Bureaucrat::GradeTooLowException");
}

const char* BExceptionIncr::what() const throw()
{
    return (" Bureaucrat::IncrementError");
}

const char* BExceptionDec::what() const throw()
{
    return (" Bureaucrat::DecrementError");
}

int    Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called" << std::endl;
}