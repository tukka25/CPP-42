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

AForm   *Intern::returnRobot(std::string target)
{
    AForm   *form = new Robot(target);
    return (form);
}

AForm   *Intern::returnShrubbery(std::string target)
{
    AForm   *form = new Shrubbery(target);
    return (form);
}

AForm   *Intern::returnPres(std::string target)
{
    AForm   *form = new Presidential(target);
    return (form);
}

AForm   *Intern::makeForm(std::string formname, std::string target)
{
    AForm   *form;
    std::string     Forms[3] = {"presidentialpardon form", "robotomy request", "shrubberycreation form"};
    AForm * (Intern::*ptr_pre)(std::string) = &Intern::returnPres;
    AForm * (Intern::*ptr_rob)(std::string) = &Intern::returnRobot;
    AForm * (Intern::*ptr_shr)(std::string) = &Intern::returnShrubbery;
    AForm * (Intern::*funcptr_arr[3])(std::string);
    funcptr_arr[0] = ptr_pre;
    funcptr_arr[1] = ptr_rob;
    funcptr_arr[2] = ptr_shr;

    for (int i = 0; i < 3; i++)
    {
        if (formname == Forms[i])
        {
            form = (this->*(funcptr_arr[i]))(target);
            std::cout << "Intern creates " << formname << std::endl;
        }
    }
    return (form);
}

Intern::~Intern()
{
    std::cout << "Intern Default Destructor" << std::endl;
}