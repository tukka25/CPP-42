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
	std::vector<int>::iterator	t = this->vecA.begin();
	for (; t != this->vecA.end(); t++)
	{
		if (i + 1 != (int)this->vecA.size())
			this->vecpairs.push_back(std::make_pair(*t, *++t));
		++++i;
	}
	std::vector<std::pair<int, int> >::iterator	tf = this->vecpairs.begin();
	tf = this->vecpairs.begin();
	std::cout << "after pairing :" << std::endl;
	for (; tf != this->vecpairs.end(); tf++)
	{
		std::cout << tf->first << std::endl << tf->second << std::endl;
	}
	tf = this->vecpairs.begin();
	for (; tf != this->vecpairs.end(); tf++)
	{
		if (tf->first < tf->second)
			std::swap(tf->first, tf->second);
	}
	tf = this->vecpairs.begin();
	std::cout << "after sort pairs :" << std::endl;
	for (;tf != this->vecpairs.end(); tf++)
	{
		std::cout << tf->first << std::endl;
	}
	recSort(this->vecpairs, 0, this->vecpairs.size() - 1);
	tf = this->vecpairs.begin();
	std::cout << "after sort a pairs :" << std::endl;
	for (;tf != this->vecpairs.end(); tf++)
	{
		std::cout << tf->first << std::endl;
	}
	exit(0);
	// tf = this->vecpairs.begin();
	this->vecA.clear();
	// tf = this->vecpairs.begin();
	for (; tf != this->vecpairs.end();tf++)
	{
		this->vecA.push_back(tf->first);
	}
	std::cout << std::endl;
	this->binarySearchInsert(this->vecpairs);
	if (!std::is_sorted(this->vecA.rbegin(), this->vecA.rend()))
		std::cout << "not Sorted" << std::endl;
	else
		std::cout << "Sorted" << std::endl;
	this->printBefSort();
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
	for (; t != this->vecA.end() && *t >= number; t++)
		i++;
	return (i);
}

std::vector<int>	Pmerge::checkM()
{
	std::vector<int>	aPair;
	std::vector<std::pair<int, int> >::iterator	t = this->vecpairs.begin();

	for(;t != this->vecpairs.end(); t++)
		aPair.push_back(t->first);
	return (aPair);
}

void	Pmerge::merge(std::vector<std::pair<int,int> > &vec, int const left, int const mid, int const right)
{
	int	subVecOne = mid - left + 1;
	int	subVectwo = right - mid;

	std::vector<int>	leftVec;
	std::vector<int>	rightVec;

	for (int i = 0; i < subVecOne; i++)
		leftVec.push_back(vec[i].first);
	for (int i = 0; i < (int)leftVec.size(); i++)
		std::cout << "left = " << leftVec[i] << std::endl;
	for (int i = 0; i < subVectwo; i++)
		rightVec.push_back(vec[mid + i + 1].first);
	for (int i = 0; i < (int)rightVec.size(); i++)
		std::cout << "right = " << rightVec[i] << std::endl;

	std::cout << "subone = " << subVecOne << std::endl;
	std::cout << "subtwo = " << subVectwo << std::endl;
	int rightVecInd = 0;
	int leftVecInd = 0;
	int mergedVecInd = 0;

	while (leftVecInd < subVecOne && rightVecInd < subVectwo)
	{
		// std::cout << "inin = " << leftVecInd << std::endl;
		// std::cout << "inin = " << rightVecInd << std::endl;
		if (leftVec[leftVecInd] < rightVec[rightVecInd])
		{
			vec[mergedVecInd].first = leftVec[leftVecInd];
			leftVecInd++;
		}
		else
		{
			// vec[mergedVecInd].first = leftVec[leftVecInd];
			vec[mergedVecInd].first = rightVec[rightVecInd];
			rightVecInd++;
		}
		mergedVecInd++;
	}
	while (mergedVecInd < subVecOne)
	{
		// std::cout << "here" << std::endl;
		vec[mergedVecInd].first = leftVec[leftVecInd];
		mergedVecInd++;
		leftVecInd++;
	}
	while (mergedVecInd < subVectwo)
	{
		vec[mergedVecInd].first = rightVec[rightVecInd];
		mergedVecInd++;
		rightVecInd++;
	}
	std::cout << "size = " <<  mergedVecInd << std::endl;
	for (int i = 0; i < mergedVecInd; i++)
	{
		std::cout << "in = " << vec[i].first << std::endl;
	}
}

void	Pmerge::recSort(std::vector<std::pair<int,int> > &vec, int const begin, int const end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
	// std::cout << "fdd" << std::endl;
    recSort(vec, begin, mid);
    recSort(vec, mid + 1, end);
    merge(vec, begin, mid, end);
}

// void	Pmerge::recSortb(std::vector<std::pair<int, int> > &t)
// {
// 	static int i;

// 	// t[0].first
// 	if (t[i].second < t[i + 1].second)
// 		std::swap(t[i].second, t[i + 1].second);
// 	// this->tmp.push_back(this->vecA[i]);
// 	// this->vecB.push_back(this->vecA[i + 1]);
// 	i++;
// 	if (i + 1 >= (int)t.size())
// 		return ;
// 	// std::cout << "here" << std::endl;
// 	// // if (this->vecA[i])
// 	recSortb(this->vecpairs);
// }

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