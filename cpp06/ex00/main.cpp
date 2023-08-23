#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	// ScalarConverter	s;
	if (ac != 2)
	{
		std::cout << "Invalid Agruments" << std::endl;
		return (1);
	}
	// int	ScalarConverter::i = 8;
	ScalarConverter::convert(av[1]);
}