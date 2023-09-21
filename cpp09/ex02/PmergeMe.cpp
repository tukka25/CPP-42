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
	tf = this->vecpairs.begin();
	std::cout << "after pairing :" << std::endl;
	for (; tf != this->vecpairs.end(); tf++)
	{
		// std::cout << "i" << std::endl;
		std::cout << tf->first << std::endl << tf->second << std::endl;
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	tf = this->vecpairs.begin();
	for (; tf != this->vecpairs.end(); tf++)
	{
		// std::cout << "i" << std::endl;
		if (tf->first < tf->second)
			std::swap(tf->first, tf->second);
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	tf = this->vecpairs.begin();
	// std::cout << "after pairing :" << std::endl;
	std::cout << "after sort pairs :" << std::endl;
	for (; tf != this->vecpairs.end(); tf++)
	{
		// std::cout << "i" << std::endl;
		std::cout << tf->first << std::endl << tf->second << std::endl;
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	// std::cout << "p = " << this->vecpairs.size() << std::endl;
	recSort(this->vecpairs);
	tf = this->vecpairs.begin();
	std::cout << "a sorting :" << std::endl;
	for (; tf != this->vecpairs.end(); tf++)
	{
		// std::cout << "i" << std::endl;
		std::cout << tf->first << std::endl << tf->second << std::endl;
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	recSortb(this->vecpairs);
	tf = this->vecpairs.begin();
	std::cout << "b sorting :" << std::endl;
	for (; tf != this->vecpairs.end(); tf++)
	{
		// std::cout << "i" << std::endl;
		std::cout << tf->first << std::endl << tf->second << std::endl;
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	this->vecA.clear();
	tf = this->vecpairs.begin();
	for (; tf != this->vecpairs.end();tf++)
	{
		this->vecA.push_back(tf->first);
	}
	std::vector<int>::iterator	ts = this->vecA.begin();
	// tf = this->vecpairs.begin();
	for (; ts != this->vecA.end(); ts++)
	{
		// std::cout << "i" << std::endl;
		std::cout << *ts  << " " ;
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	std::cout << std::endl;
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
}

void	Pmerge::recSort(std::vector<std::pair<int, int> > &t)
{
	static int i;

	// t[0].first
	if (t[i].first < t[i + 1].first)
		std::swap(t[i].first, t[i + 1].first);
	// this->tmp.push_back(this->vecA[i]);
	// this->vecB.push_back(this->vecA[i + 1]);
	i++;
	if (i + 1 >= (int)t.size())
		return ;
	std::cout << "here" << std::endl;
	// // if (this->vecA[i])
	recSort(this->vecpairs);
}

void	Pmerge::recSortb(std::vector<std::pair<int, int> > &t)
{
	static int i;

	// t[0].first
	if (t[i].second < t[i + 1].second)
		std::swap(t[i].second, t[i + 1].second);
	// this->tmp.push_back(this->vecA[i]);
	// this->vecB.push_back(this->vecA[i + 1]);
	i++;
	if (i + 1 >= (int)t.size())
		return ;
	// std::cout << "here" << std::endl;
	// // if (this->vecA[i])
	recSortb(this->vecpairs);
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