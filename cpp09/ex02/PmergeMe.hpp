#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <cstring>
# include <cstdlib>
# include <fstream>
#include <sstream>
#include <stack>
# include <algorithm>
# include <stdlib.h>
# include <map>
# include <list>
# include <utility>

class Pmerge
{
	private:
		std::vector<int>	vecA;
		std::list<int>		listA;
		std::vector<std::pair<int, int> >	vecpairs;
		std::list<std::pair<int, int> >		listpairs;
		// std::vector<int>	vecB;
		std::vector<int>	tmp;
		int					vecOdd;
		int					listOdd;
	public:
		Pmerge(char *av[]);
		std::vector<int>	checkM();
		bool	checkValues(char *av[]);
		bool	checkIfSorted(void);
		void	printBefSort();
		void	merge(std::vector<std::pair<int,int> > &vec, int const left, int const mid, int const right);
		// void	recSort(std::vector<std::pair<int,int> > &vec, int const begin, int const end);
		void	recSortb(std::vector<std::pair<int, int> > &t);
		int		returnIndex(int number);
		void	binarySearchInsert(std::vector<std::pair<int, int> > &t);
		// void	sortVector();
};

template <typename T, typename P> void	sortVector(T container, P pair);
template <typename C, int beg, int en> void	recSort(C &vec, int begin, int end);
# include "PmergeMe.tpp"
class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};

# endif