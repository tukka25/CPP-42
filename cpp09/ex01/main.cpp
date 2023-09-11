#include "RPN.hpp"

int main(int ac, char *argv[])
{
    if (ac != 2)
    {
        std::cerr << "Error" << std::endl;
        return (0);
    }
    try
    {
        Rpn r;

        r.execution(argv[1]);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}