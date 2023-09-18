#include "PmergeMe.hpp"

Pmerge::Pmerge(char *av[])
{
	std::string		str;
	for (int i = 1; av[i]; i++)
	{
		str = av[i];
		if (str.empty() || str.find_first_not_of("0987654321") != std::string::npos)
			throw (WrongInput());
		this->vec.push_back(std::atoi(av[i]));
	}
}

const char *WrongInput::what() const throw()
{
    return ("Error: Invalid Number");
}

void	Pmerge::printBefSort()
{
	std::vector<int>::iterator	t = this->vec.begin();
	for (; t != this->vec.end(); t++)
	{
		std::cout << *t <<  " ";
	}
	std::cout << std::endl;
}

bool	Pmerge::checkValues(char *av[])
{
	std::string		str;
	for (int i = 1; av[i]; i++)
	{
		str = av[i];
		if (str.empty() || str.find_first_not_of("0987654321") != std::string::npos)
			return (false);
		
	}
	return (true);
}