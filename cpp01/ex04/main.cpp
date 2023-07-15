#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <string>
// #include <bits/stdc++>
// using namespace std;

void	ft_split(std::string str, char *av[], std::ofstream &file)
{
	int					i;
	std::string			w;

	while (1)
	{
		i = str.find(' ');
		if (i == 0)
			i += 1;
		w = str.substr(0 , i);
		if (w == av[2])
			file << av[3];
		else
			file << w;
		str = str.erase(0, i);
		if (str.empty())
			break;
	}
}

int main(int ac, char *av[])
{
	std::fstream	in;
	std::string		out_name;
	std::string		line;
	std::string		tmp = ".replace";
	std::stringstream	buf;

	if (ac == 4)
	{
		in.open(av[1], std::ios::in);
		if (!in)
		{
			std::cout << "File Error" << std::endl;
			return (0);
		}
		out_name = av[1] + tmp;
		std::ofstream	outfile(out_name);
		while (std::getline(in, line))
		{
			ft_split(line, av, outfile);
			if (!in.eof())
				outfile << std::endl;
		}
		in.close();
		outfile.close();
	}
	else
	{
		std::cout << "Wrong Inputs Number"<< std::endl;
	}
}