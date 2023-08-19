#include "PresidentialPardonForm.hpp"

Presidential::Presidential() : AForm("Presidential", 25, 5)
{
    std::cout << "Presidential Default Constructor Called" << std::endl;
    flag = 0;
    this->printMsg("default");
}

Presidential::Presidential(std::string name) : AForm(name, 25, 5)
{
    std::cout << "Presidential Parametrized Constructor Called" << std::endl;
    flag = 0;
    this->printMsg(name);
}

void    Presidential::signForm() const
{
    if (this->getSign())
        throw (42);
    throw (410);
}

void    Presidential::printMsg(std::string target)
{
    std::cout << target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

Presidential::~Presidential()
{
    std::cout << "Presidential Destructor Called" << std::endl;
}