# include <iostream>
# include <vector>
# include <iterator>
# include <cstring>
# include <cstdlib>
# include <fstream>
#include <sstream>
# include <algorithm>
# include <map>

int main (int ac, char *av[])
{
	std::string			tmp;
	std::stringstream	s;

	s << av[1];
	while (getline(s, tmp, '-'))
	{
		std::cout << tmp << std::endl;
	}
}