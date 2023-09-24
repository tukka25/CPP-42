#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
	if (ac < 2)
	{
		std::cerr << "Not Enough Parameters" << std::endl;
		return (1);
	}
	try
	{
		Pmerge	p(av);
	}
	catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}