#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <sstream>
# include <stack>
# include <algorithm>
# include <stdlib.h>
#include <iomanip> 
# include <map>
# include <list>
# include <utility>

class Pmerge
{
	private:
		std::vector<int>	vecA;
		std::deque<int>		dequeA;
		std::vector<std::pair<int, int> >	vecpairs;
		std::deque<std::pair<int, int> >		dequepairs;
		std::vector<int>	tmp;
		int					vecOdd;
		int					dequeOdd;
	public:
		Pmerge(char *av[]);
		Pmerge();
		Pmerge(const Pmerge &p);
		Pmerge&	operator=(const Pmerge &p);
		~Pmerge();
		std::vector<int>	checkM();
		bool	checkValues(char *av[]);
		bool	checkIfSorted(void);
		void	printBefSort();
		void	merge(std::vector<std::pair<int,int> > &vec, int const left, int const mid, int const right);
		void	recSortb(std::vector<std::pair<int, int> > &t);
		int		returnIndex(int number);
};

template <typename T, typename P> void	sortVector(T &container, P &pair, int odd);
template <typename C> void	recSort(C &vec, int begin, int end);
template<typename C> void	merge(C &vec, int const left, int const mid, int const right);
template < typename P, typename C> void	binarySearchInsert(P &t, C &container, int vecOdd);
template <typename C> int		returnIndex(int number, C container);
# include "PmergeMe.tpp"
class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};

# endif