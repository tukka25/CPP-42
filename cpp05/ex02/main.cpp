#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat  b(50);
    Shrubbery s("n");
    // Presidential    s("tukka");
    // AForm        F(120, 10);
    try
    {
        if (b.getGrade() < 0 || b.getGrade() > 150)
            throw (1);
        // if ((F.getgradeExec() < 0 || F.getgradeExec() > 150)
        //     || (F.getgradeSign() < 0 || F.getgradeSign() > 150))
        // throw (1);
        // std::cout << F << std::endl;
        // std::cout << b << std::endl;
        b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
        //  b.increment(10);
        // std::cout << "b = " << b.getGrade() << std::endl;
        //  b.increment(10);
        // std::cout << "b = " << b.getGrade() << std::endl;
        //  b.increment(9);
        // std::cout << "b = " << b.getGrade() << std::endl;
        // F.beSigned(b);
        // std::cout << F.getSign() << std::endl;
        // F.signForm();
        //  b.increment(1);
        // std::cout << "b = " << b.getGrade() << std::endl;
    }
    catch (int i)
    {
        if (i == 1)
            std::cout << "Grade should be between 1 and 150" << std::endl;
        if (i == 405)
            std::cout << "Form::GradeTooLowException" << std::endl;
        if (i == 404)
            std::cout << "Form::GradeTooHighException" << std::endl;
        // if (i == 42)
            // std::cout << b.getName() << " signed " << F.getformName() << std::endl;
        // if (i == 410)
            // std::cout << b.getName() << " coudln't sign " << F.getformName()
            // << "because of " << F.getgradeSign() << "is not high enough" << std::endl;
        // return (0);
    }
    // catch (int k)
    // {
    //     if (k == 42)
    //         std::cout << b.getName();
    // }
}