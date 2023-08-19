#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    // Bureaucrat  b(1);
    // Shrubbery s("n");
    // Robot      r("r");
    Presidential p("p");
    AForm       *Form;
    try
    {
        Intern      i;
        Form = i.makeForm("presidentialpardon form", "str");
        // r.beSigned(b);
        // r.execute(b);
        // b.executeForm(r);
    }
    catch (int i)
    {
        if (i == 1)
            std::cout << "Grade should be between 1 and 150" << std::endl;
        if (i == 405)
            std::cout << "Form::GradeTooLowException" << std::endl;
        if (i == 404)
            std::cout << "Form::GradeTooHighException" << std::endl;
        // if (i == 101)
        //     std::cout << b.getName() << " executed " << r.getFormName() << std::endl;
        if (i == 413)
            std::cout << "Failed to executed Form" << std::endl;
        // if (i == 42)
            // std::cout << b.getName() << " signed " << F.getformName() << std::endl;
        // if (i == 410)
            // std::cout << b.getName() << " coudln't sign " << F.getformName()
            // << "because of " << F.getgradeSign() << "is not high enough" << std::endl;
        // return (0);
    }
    delete Form;
}