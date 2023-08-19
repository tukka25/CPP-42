#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  b(170);
    try
    {
        if (b.getGrade() > 150 || b.getGrade() < 1)
            throw (1);
        std::cout << b << std::endl;
        b.increment(10);
        std::cout << "b = " << b << std::endl;
         b.increment(10);
        std::cout << "b = " << b << std::endl;
         b.increment(10);
        std::cout << "b = " << b << std::endl;
         b.increment(10);
        std::cout << "b = " << b << std::endl;
         b.increment(10);
        std::cout << "b = " << b << std::endl;
         b.increment(10);
        std::cout << "b = " << b << std::endl;
    }
    catch (int i)
    {
        if (i == 1)
            std::cout << "Grade should be between 1 and 150" << std::endl;
        if (i == 405)
            std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
        if (i == 404)
            std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
        return (0);
    }
}