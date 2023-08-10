#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  b(70);
        std::cout << b << std::endl;
        b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(10);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(9);
        std::cout << "b = " << b.getGrade() << std::endl;
         b.increment(1);
        std::cout << "b = " << b.getGrade() << std::endl;
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