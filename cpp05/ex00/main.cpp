#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  b(10);
        std::cout << b << std::endl;
        b.increment(10);
        std::cout << "b = " << b << std::endl;
    }
    catch (BExceptionHigh &c)
    {
        std::cout << c.what() << std::endl;
    }
    catch (BExceptionLow &c)
    {
        std::cout << c.what() << std::endl;
    }
    catch (BExceptionIncr &c)
    {
        std::cout << c.what() << std::endl;
    }
    catch (BExceptionDec &c)
    {
        std::cout << c.what() << std::endl;
    }
}