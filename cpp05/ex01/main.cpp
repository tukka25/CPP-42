#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  b(150);
    Form        F(120, 10);
    try
    {
        if (F.getgradeExec() < 0 || F.getgradeSign() < 0)
            throw(BFormHigh());
        if (F.getgradeExec() > 150 || F.getgradeSign() > 150)
            throw (BFormLow());
        if (b.getGrade() < 0)
            throw (BExceptionHigh());
        if (b.getGrade() > 150)
            throw (BExceptionLow());
        F.beSigned(b);
        std::cout << F.getSign() << std::endl;
        F.signForm();
    }
    catch (BSignForm &c)
    {
        std::cout << b.getName() << c.what() << F.getformName()
        << " because of " << F.getgradeSign() << " is not high enough" << std::endl;
    }
    catch (std::exception &c)
    {
        std::cout << c.what() << std::endl;
    }
}