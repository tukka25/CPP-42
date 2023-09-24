#include "PmergeMe.hpp"

Pmerge::Pmerge(char *av[])
{
	std::string		str;
	for (int i = 1; av[i]; i++)
	{
		str = av[i];
		if (str.empty() || str.find_first_not_of("0987654321") != std::string::npos)
			throw (WrongInput());
		if (std::find(this->vecA.begin(), this->vecA.end(), std::atoi(av[i])) != this->vecA.end())
			throw (WrongInput());
		this->vecA.push_back(std::atoi(av[i]));
		this->listA.push_back(std::atoi(av[i]));
	}
	if (this->vecA.size() % 2 == 1)
	{
		this->vecOdd = *--this->vecA.end();
		this->listOdd = this->vecOdd;
	}
	else
	{
		this->vecOdd = -1;
		this->listOdd = -1;
	}
	sortVector(this->vecA, this->vecpairs);
}


void	Pmerge::printBefSort()
{
	std::vector<int>::iterator	t = this->vecA.begin();
	// std::vector<int>::iterator	t2 = this->vecB.begin();
	std::cout << "a = ";
	for (; t != this->vecA.end(); t++)
	{
		std::cout << *t <<  " ";
	}
	std::cout << std::endl;
	// std::cout << "b = ";
	// for (; t2 != this->vecB.end(); t2++)
	// {
	// 	std::cout << *t2 <<  " ";
	// }
	std::cout << std::endl;
}

// void	Pmerge::sortVector()
// {
// 	int	i = 0;
// 	std::vector<int>::iterator	t = this->vecA.begin();
// 	for (; t != this->vecA.end(); t++)
// 	{
// 		if (i + 1 != (int)this->vecA.size())
// 		{
// 			this->vecpairs.push_back(std::make_pair(*t, *++t));
// 			this->listpairs.push_back(std::make_pair(*t, *++t));
// 		}
// 		++++i;
// 	}
// 	std::vector<std::pair<int, int> >::iterator	tf = this->vecpairs.begin();
// 	tf = this->vecpairs.begin();
// 	std::cout << "after pairing :" << std::endl;
// 	for (; tf != this->vecpairs.end(); tf++)
// 	{
// 		std::cout << tf->first << std::endl << tf->second << std::endl;
// 	}
// 	tf = this->vecpairs.begin();
// 	for (; tf != this->vecpairs.end(); tf++)
// 	{
// 		if (tf->first < tf->second)
// 			std::swap(tf->first, tf->second);
// 	}
// 	tf = this->vecpairs.begin();
// 	std::cout << "after sort pairs :" << std::endl;
// 	for (;tf != this->vecpairs.end(); tf++)
// 	{
// 		std::cout << tf->first << std::endl;
// 	}
// 	recSort(this->vecpairs, 0, this->vecpairs.size() - 1);
// 	tf = this->vecpairs.begin();
// 	std::cout << "after sort a pairs :" << std::endl;
// 	std::cout << "len after f-j = " << this->vecpairs.size() << std::endl;
// 	for (;tf != this->vecpairs.end(); tf++)
// 	{
// 		std::cout << tf->first << std::endl;
// 	}
// 	// exit(0);
// 	// tf = this->vecpairs.begin();
// 	this->vecA.clear();
// 	tf = this->vecpairs.begin();
// 	for (; tf != this->vecpairs.end();tf++)
// 	{
// 		this->vecA.push_back(tf->first);
// 	}
// 	std::cout << std::endl;
// 	this->binarySearchInsert(this->vecpairs);
// 	if (!std::is_sorted(this->vecA.rbegin(), this->vecA.rend()))
// 		std::cout << "not Sorted" << std::endl;
// 	else
// 		std::cout << "Sorted" << std::endl;
// 	this->printBefSort();
// }

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
	if (this->vecOdd != -1)
		this->vecA.insert(this->vecA.begin() + this->returnIndex(this->vecOdd), this->vecOdd);
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
		leftVec.push_back(vec[left + i].first);
	for (int i = 0; i < subVectwo; i++)
		rightVec.push_back(vec[mid + i + 1].first);
	int rightVecInd = 0;
	int leftVecInd = 0;
	int mergedVecInd = left;

	while (leftVecInd < subVecOne && rightVecInd < subVectwo)
	{
		if (leftVec[leftVecInd] > rightVec[rightVecInd])
		{
			vec[mergedVecInd].first = leftVec[leftVecInd];
			leftVecInd++;
		}
		else
		{
			vec[mergedVecInd].first = rightVec[rightVecInd];
			rightVecInd++;
		}
		mergedVecInd++;
	}
	while (leftVecInd < subVecOne)
	{
		vec[mergedVecInd].first = leftVec[leftVecInd];
		mergedVecInd++;
		leftVecInd++;
	}
	while (rightVecInd < subVectwo)
	{
		vec[mergedVecInd].first = rightVec[rightVecInd];
		mergedVecInd++;
		rightVecInd++;
	}
}

// void	Pmerge::recSort(std::vector<std::pair<int,int> > &vec, int const begin, int const end)
// {
//     if (begin >= end)
//         return;
//     int mid = begin + (end - begin) / 2;
//     recSort(vec, begin, mid);
//     recSort(vec, mid + 1, end);
//     merge(vec, begin, mid, end);
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