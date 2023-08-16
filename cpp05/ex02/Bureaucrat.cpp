#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() :name("tukka")
{
    std::cout << "Default Constructor Called" << std::endl;
    this->grade = 0;
}

Bureaucrat::Bureaucrat(int grade2) :name("tukka")
{
    // if (grade2 < 0 || grade2 > 150)
    //     throw (1);
    std::cout << "Default Constructor Called" << std::endl;
    this->grade = grade2;
}

void    Bureaucrat::increment(int amount)
{
    if (this->grade - amount < 1)
        throw (404);
    this->grade -= amount;
}

void    Bureaucrat::decrement(int amount)
{
    if (this->grade + amount > 150)
        throw (405);
    this->grade += amount;
}

std::string    Bureaucrat::getName(void) const
{
    return (this->name);
}

void    Bureaucrat::executeForm(AForm const & form)
{
    form.execute(*this);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b2)
{
    os << b2.getName() << ", bureaucrat grade " << b2.getGrade();
    return (os);
}

int    Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called" << std::endl;
}