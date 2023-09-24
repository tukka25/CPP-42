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
		this->dequeA.push_back(std::atoi(av[i]));
	}
	if (this->vecA.size() % 2 == 1)
	{
		this->vecOdd = *--this->vecA.end();
		this->dequeOdd = this->vecOdd;
	}
	else
	{
		this->vecOdd = -1;
		this->dequeOdd = -1;
	}
	clock_t start, end;

	std::cout << "before ";
	this->printBefSort();
	start = clock();
	sortVector(this->vecA, this->vecpairs, this->vecOdd);
	end = clock();
	std::cout << "after ";
	printBefSort();
	double time_taken = static_cast<double>(end - start);
    std::cout << "Time to process a range of "  << this->vecA.size() << " with std::vector : " << std::fixed
         << time_taken << std::setprecision(5);
    std::cout << " us " << std::endl;
	start = clock();
	sortVector(this->dequeA, this->dequepairs, this->dequeOdd);
	end = clock();
	time_taken = static_cast<double>(end - start);
	std::cout << "Time to process a range of "  << this->dequeA.size() << " with std::deque : " << std::fixed
         << time_taken << std::setprecision(5);
    std::cout << " us " << std::endl;
}


void	Pmerge::printBefSort()
{
	std::vector<int>::iterator	t = this->vecA.begin();
	for (; t != this->vecA.end(); t++)
	{
		std::cout << *t <<  " ";
	}
	std::cout << std::endl;
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

// void	Pmerge::merge(std::vector<std::pair<int,int> > &vec, int const left, int const mid, int const right)
// {
// 	int	subVecOne = mid - left + 1;
// 	int	subVectwo = right - mid;

// 	std::vector<int>	leftVec;
// 	std::vector<int>	rightVec;

// 	for (int i = 0; i < subVecOne; i++)
// 		leftVec.push_back(vec[left + i].first);
// 	for (int i = 0; i < subVectwo; i++)
// 		rightVec.push_back(vec[mid + i + 1].first);
// 	int rightVecInd = 0;
// 	int leftVecInd = 0;
// 	int mergedVecInd = left;

// 	while (leftVecInd < subVecOne && rightVecInd < subVectwo)
// 	{
// 		if (leftVec[leftVecInd] > rightVec[rightVecInd])
// 		{
// 			vec[mergedVecInd].first = leftVec[leftVecInd];
// 			leftVecInd++;
// 		}
// 		else
// 		{
// 			vec[mergedVecInd].first = rightVec[rightVecInd];
// 			rightVecInd++;
// 		}
// 		mergedVecInd++;
// 	}
// 	while (leftVecInd < subVecOne)
// 	{
// 		vec[mergedVecInd].first = leftVec[leftVecInd];
// 		mergedVecInd++;
// 		leftVecInd++;
// 	}
// 	while (rightVecInd < subVectwo)
// 	{
// 		vec[mergedVecInd].first = rightVec[rightVecInd];
// 		mergedVecInd++;
// 		rightVecInd++;
// 	}
// }

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