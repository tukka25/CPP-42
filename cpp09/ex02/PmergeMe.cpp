#include "PmergeMe.hpp"

Pmerge::Pmerge(char *av[])
{
	std::string		str;
	for (int i = 1; av[i]; i++)
	{
		str = av[i];
		if (str.empty() || str.find_first_not_of("0987654321") != std::string::npos)
			throw (WrongInput());
		this->vecA.push_back(std::atoi(av[i]));
	}
	// if ()
}


void	Pmerge::printBefSort()
{
	std::vector<int>::iterator	t = this->vecA.begin();
	std::vector<int>::iterator	t2 = this->vecB.begin();
	std::cout << "a = ";
	for (; t != this->vecA.end(); t++)
	{
		std::cout << *t <<  " ";
	}
	std::cout << std::endl;
	std::cout << "b = ";
	for (; t2 != this->vecB.end(); t2++)
	{
		std::cout << *t2 <<  " ";
	}
	std::cout << std::endl;
}

void	Pmerge::sortVector()
{
	int	i = 0;
	// std::vector<int>	tmp;
	std::vector<int>::iterator	t = this->vecA.begin();
	for (; t != this->vecA.end(); t++)
	{
		// std::cout << "i" << std::endl;
		if (i + 1 != (int)this->vecA.size())
			this->vecpairs.push_back(std::make_pair(*t, *++t));
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
		++++i;
	}
	std::vector<std::pair<int, int> >::iterator	tf = this->vecpairs.begin();

	for (; tf != this->vecpairs.end(); tf++)
	{
		// std::cout << "i" << std::endl;
		std::cout << "{" << tf->first << "   "   << tf->second << "}" << std::endl;
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	// this->recSort(this->vecA[0], this->vecA[1]);
	// for (;i < (int)this->vecA.size(); i++)
	// {
	// 	if (i % 2 == 1)
	// 	{
	// 		if (this->vecA[i] < this->vecA[i - 1])
	// 			std::swap(this->vecA[i], this->vecA[i - 1]);
	// 		this->vecB.push_back(this->vecA[i]);
	// 		tmp.push_back(this->vecA[i - 1]);
	// 	}
	// 	// i++;
	// }
	// if (this->vecA.size() % 2 == 1)
	// 	this->vecB.push_back(this->vecA[i - 1]);
	// if (this->vecA[i] < this->vecA[i - 1])
	// 			std::swap(this->vecA[i], this->vecA[i - 1]);
	// 	tmp.push_back(this->vecA[i - 1]);
	std::vector<int>::iterator		t1 = tmp.begin();
	std::vector<int>::iterator		t2 = this->vecB.begin();

	for (; t1 != tmp.end(); t1++)
	{
		std::cout << *t1 << " ";
	}
	std::cout << std::endl;
	for (; t2 != this->vecB.end(); t2++)
	{
		std::cout << *t2 << " ";
	}
	// this->vecA.clear();
	// t1 = tmp.begin();
	// t2 = this->vecB.begin();
	// for (; t1 != tmp.end();t1++)
	// {
		
	// }
	// i = (int)this->vecA.size() - 1;
	// std::cout << "i = " << i << std::endl;
	// if (this->vecA[i] < this->vecA[i - 1])
	// 			std::swap(this->vecA[i], this->vecA[i - 1]);
	// this->vecB.push_back(this->vecA[i]);
	// this->vecA.erase(this->vecA.begin() + i);
}

void	Pmerge::recSort(int a1, int a2)
{
	static int i;

	if (a1 > a2)
		std::swap(this->vecA[i], this->vecA[i + 1]);
	this->tmp.push_back(this->vecA[i]);
	this->vecB.push_back(this->vecA[i + 1]);
	i += 2;
	if (i >= (int)this->vecA.size() || this->vecA[i] == *--this->vecA.end())
		return ;
	// if (this->vecA[i])
	recSort(this->vecA[i], this->vecA[i + 1]);
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

const char *WrongInput::what() const throw()
{
    return ("Error: Invalid Number");
}