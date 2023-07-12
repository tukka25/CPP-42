#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	
	if (ac == 4)
	{
		if (open(av[1], O_RDONLY) < 0)
		{
			std::cout << "File Error" << std::endl;
			return (0);
		}
		std::cout << argv[1] << std::endl;
	}
	else
	{
		std::cout << "Wrong Inputs Number"<< std::endl;
	}
}