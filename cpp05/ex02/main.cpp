#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat  b(190);
    Shrubbery s("n");
    Shrubbery s1;
    Robot      r("r");
    Presidential p("p");
    try
    {
        if (b.getGrade() < 0)
            throw (BExceptionHigh());
        if (b.getGrade() > 150)
            throw (BExceptionLow());
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
}