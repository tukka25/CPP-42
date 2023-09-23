#include "PmergeMe.hpp"

Pmerge::Pmerge(char *av[])
{
	std::string		str;
	for (int i = 1; av[i]; i++)
	{
		str = av[i];
		// std::cout << std::atoi(av[i]) << std::endl;
		if (str.empty() || str.find_first_not_of("0987654321") != std::string::npos)
			throw (WrongInput());
		if (std::find(this->vecA.begin(), this->vecA.end(), std::atoi(av[i])) != this->vecA.end())
			throw (WrongInput());
		this->vecA.push_back(std::atoi(av[i]));
	}
	if (this->vecA.size() % 2 == 1)
		odd = *--this->vecA.end();
	else
		odd = -1;
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
	for (;tf != this->vecpairs.end(); tf++)
	{
		// std::cout << "i" << std::endl;
		std::cout << tf->first << std::endl << tf->second << std::endl;
		// std::pair<int, int> myPair = std::make_pair(*t, *++t);
		// std::make_pair(*t, *t);
	}
	// std::cout << "p = " << this->vecpairs.size() << std::endl;
	// for (int i = 0; i < (int)this->vecpairs.size() - 1; i++)
	recSort(this->vecpairs);
	tf = this->vecpairs.begin();
	// std::cout << "a sorting :" << std::endl;
	// for (; tf != this->vecpairs.end(); tf++)
	// {
	// 	// std::cout << "i" << std::endl;
	// 	std::cout << tf->first << std::endl << tf->second << std::endl;
	// 	// std::pair<int, int> myPair = std::make_pair(*t, *++t);
	// 	// std::make_pair(*t, *t);
	// }
	// recSortb(this->vecpairs);
	// tf = this->vecpairs.begin();
	// std::cout << "b sorting :" << std::endl;
	// for (; tf != this->vecpairs.end(); tf++)
	// {
	// 	// std::cout << "i" << std::endl;
	// 	std::cout << tf->first << std::endl << tf->second << std::endl;
	// 	// std::pair<int, int> myPair = std::make_pair(*t, *++t);
	// 	// std::make_pair(*t, *t);
	// }
	this->vecA.clear();
	tf = this->vecpairs.begin();
	for (; tf != this->vecpairs.end();tf++)
	{
		this->vecA.push_back(tf->first);
	}
	// std::vector<int>::iterator	ts = this->vecA.begin();
	// tf = this->vecpairs.begin();
	// for (; ts != this->vecA.end(); ts++)
	// {
	// 	// std::cout << "i" << std::endl;
	// 	std::cout << *ts  << " " ;
	// 	// std::pair<int, int> myPair = std::make_pair(*t, *++t);
	// 	// std::make_pair(*t, *t);
	// }
	std::cout << std::endl;
	this->binarySearchInsert(this->vecpairs);
	this->printBefSort();
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

void	Pmerge::binarySearchInsert(std::vector<std::pair<int, int> > &t)
{
	int	i = 0;
	std::cout << "size = " << this->vecpairs.size() << std::endl;
	for (;i < (int)this->vecpairs.size();i++)
	{
		// std::vector<int>::iterator	k = std::lower_bound(this->vecA.begin(), this->vecA.end(), t[i].second);
		// int in = std::distance(this->vecA.begin(), k);
		std::cout << "ind = " << this->returnIndex(t[i].second) << std::endl;
		this->vecA.insert(this->vecA.begin() + this->returnIndex(t[i].second), t[i].second);
	}
	if (odd != -1)
		this->vecA.insert(this->vecA.begin() + this->returnIndex(odd), odd);
	// this->vecA.push_back(t[i].second);
}

int		Pmerge::returnIndex(int number)
{
	int		i = 0;
	std::vector<int>::iterator	t = this->vecA.begin();
	// std::cout << "num = " << number << std::endl;
	// std::cout << "t = " << *t << std::endl;
	for (; t != this->vecA.end() && *t >= number; t++)
	{
		// std::cout << "df" << std::endl;
		i++;
	}
	return (i);
}

bool	Pmerge::checkM(int i)
{
	std::vector<int>	aPair;
	// int					j = 0;
	std::vector<std::pair<int, int> >::iterator	t = this->vecpairs.begin();

	for(;t != this->vecpairs.end(); t++)
	{
		// std::cout << "t = " << t.fi << std::endl;
		aPair.push_back(t->first);
		// j++;
	}
	if(i == *std::max_element(aPair.begin(), aPair.end()))
		return (true);
	return (false);
}

void	Pmerge::recSort(std::vector<std::pair<int, int> > &t)
{
	static int i;
	static int	j;

	// t[0].first
		// std::cout << "si = " << t.size() << std::endl;
		// std::cout << "j = " << j << std::endl;
	if (j < (int)t.size())
	{
		// std::cout << "j in = " << j << std::endl;
		if (j + 1 == (int)t.size())
			j--;
		// std::cout << "t[i] = " << t[j].first << std::endl;
		// std::cout << "i = " << i << std::endl;
		if (j > 0 && this->checkM(t[j].first))
		{
			std::cout << "t[j] = " << t[j].first << std::endl;
			std::cout << "t[j - 1] = " << t[j - 1].first << std::endl;
			if (t[j].first > t[j - 1].first)
			{
				// std::cout << "swaped" << std::endl;
				std::swap(t[j].first, t[j - 1].first);
			}
			j--;
			recSort(this->vecpairs);
		}
		else if (j + 1 < (int)t.size() && t[j].first < t[j + 1].first)
		{
			std::cout << "tukka" << std::endl;
			std::swap(t[j].first, t[j + 1].first);
			j++;
			recSort(this->vecpairs);
		}
	}
	j = i + 1;
	// this->tmp.push_back(this->vecA[i]);
	// this->vecB.push_back(this->vecA[i + 1]);
	i++;
	if (i + 1 >= (int)t.size())
	{
		std::cout << "exit 1 = " << j << std::endl;
		return ;
	}
	// std::cout << "here" << std::endl;
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