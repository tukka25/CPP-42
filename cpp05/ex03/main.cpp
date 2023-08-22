#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat  b(1);
    Shrubbery s("n");
    Robot      r("r");
    Presidential p("p");
    AForm       *Form;
    try
    {
        Intern      i;
        Form = i.makeForm("presidentialpardon form", "str");
        r.beSigned(b);
        r.execute(b);
        b.executeForm(r);
    }
    catch (BSignForm &c)
    {
        std::cout << b.getName() << c.what() << r.getFormName()
        << " because of " << r.getGradeSign() << " is not high enough" << std::endl;
    }
    catch (std::exception &c)
    {
        std::cout << c.what() << std::endl;
    }
    delete Form;
}