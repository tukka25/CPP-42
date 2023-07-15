#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <string>
// #include <bits/stdc++>
// using namespace std;

void	ft_split(std::string	str, char *av[])
{
	std::istringstream s(str);
	int					i;
	std::string			w;

	(void)av;
	// while (s >> w)
	// {
	// 	if (w == av[2])
	// 		std::cout << av[3];
	// 	else
	// 		std::cout << w + ' ';
	// }
	// 		std::cout << w + ' ';
	// std::cout << str;
	while (1)
	{
		i = str.find(' ');
		if (i == 0)
			i += 1;
		w = str.substr(0 , i);
		if (w == av[2])
			std::cout << av[3];
		else
			std::cout << w;
		str = str.erase(0, i);
		if (str.empty())
			break;
		// std::cout << "after trimming : " << str << std::endl;
		// i = str.find(' ');
		// if (i == 0)
		// 	i += 1;
		// w = str.substr(0 , i);
		// if (w == av[2])
		// 	std::cout << av[2];
		// else
		// 	std::cout << w;
		// str = str.erase(i);
		// if (str.empty())
		// 	break ;
	}
	// str.substr(0)
	// std::cout << "sub = " << str.substr(0 , str.find(' '));
	// std::cout << w;
}

int main(int ac, char *av[])
{
	std::fstream	in;
	std::string		line;
	std::string		tmp;
	std::stringstream	buf;
	// char		*h = new char[1000];
	// char		*d = new char [1000];
	// char			*t;
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
		while (std::getline(in, line))
		{
			// char *t = std::strtok(line , ' ');
			// tmp += line;
			ft_split(line, av);
			std::cout << std::endl;
			// std::strcpy(d, (char *)tmp);
			// h = std::strtok(line, " ");
			// d = std::strtok(h, " ");
		}
		// std::cout << tmp << std::endl;
		in.close();
	}
	else
	{
		std::cout << "Wrong Inputs Number"<< std::endl;
	}
}