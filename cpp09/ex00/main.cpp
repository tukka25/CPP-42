#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Only 2 Arguments" << std::endl;
        return (1);
    }
    try
    {
        Bitcoin b;
        b.execution(av[1]);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}