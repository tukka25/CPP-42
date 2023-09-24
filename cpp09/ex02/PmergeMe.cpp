#include "PmergeMe.hpp"

Pmerge::Pmerge(){}

Pmerge::Pmerge(const Pmerge &p)
{
	*this = p;
}

Pmerge&	Pmerge::operator=(const Pmerge &p)
{
	if (this != &p)
	{
		this->vecA = p.vecA;
		this->dequeA = p.dequeA;
		this->vecpairs = p.vecpairs;
		this->dequepairs = p.dequepairs;
		this->tmp = p.tmp;
		this->vecOdd = p.vecOdd;
		this->dequeOdd = p.dequeOdd;
	}
	return (*this);
}

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

Pmerge::~Pmerge(){}