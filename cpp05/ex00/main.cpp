#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  b(170);
        if (b.getGrade() > 150 || b.getGrade() < 1)
            throw (std::runtime_error("errror"));
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
    catch (std::exception &c)
    {
        std::cout << c.what() << std::endl;
        // if (c.what())
        //     std::cout << "Grade should be between 1 and 150" << std::endl;
        // if (i == 405)
        //     std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
        // if (i == 404)
        //     std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
        return (0);
    }
}