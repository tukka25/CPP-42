#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	std::fstream	in;
	std::string		line;
	std::string		tmp;
	// int				j = 0;
	// char			c;
	if (ac == 4)
	{
		in.open(av[1], std::ios::in);
		if (!in)
		{
			std::cout << "File Error" << std::endl;
			return (0);
		}
		while (getline(in, line))
		{
			tmp = line.find(av[3]);
			std::cout << "tmp = " << tmp << std::endl;
			std::cout << line << std::endl;
		}
		in.close();
	}
	else
	{
		std::cout << "Wrong Inputs Number"<< std::endl;
	}
}