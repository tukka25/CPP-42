#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern & i)
{
    (void)i;
}

Intern&     Intern::operator=(const Intern& i)
{
    (void)i;
    return(*this);
}

AForm   *Intern::makeForm(std::string formname, std::string target)
{
    AForm   *form = new Presidential(formname);

    (void)target;
    std::cout << "Intern creates " << formname << std::endl;
    return (form);
}

Intern::~Intern()
{
    std::cout << "Intern Default Destructor" << std::endl;
}