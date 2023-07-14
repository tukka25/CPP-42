#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <string>
// #include <bits/stdc++>
// using namespace std;

// char	**ft_split(char *str, )
// {
// 	int		i = 0;

// 	if (!str)
// 		return (NULL);
// 	while ()
// }

int main(int ac, char *av[])
{
	std::fstream	in;
	std::string		line;
	std::string		tmp;
	std::stringstream	buf;
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
			tmp += line + "\n";
			line = std::strtok(tmp, ' ');
			std::cout << line << std::endl;
		}
		std::cout << tmp << std::endl;
		in.close();
	}
	else
	{
		std::cout << "Wrong Inputs Number"<< std::endl;
	}
}