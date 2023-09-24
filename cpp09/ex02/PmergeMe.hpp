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
// #include <bits/stdc++.h>
# include <utility>

class Pmerge
{
	private:
		std::vector<int>	vecA;
		std::vector<std::pair<int, int> >	vecpairs;
		std::vector<int>	vecB;
		std::vector<int>	tmp;
		int					odd;
	public:
		Pmerge(char *av[]);
		std::vector<int>	checkM();
		bool	checkValues(char *av[]);
		bool	checkIfSorted(void);
		void	printBefSort();
		void	merge(std::vector<std::pair<int,int> > &vec, int const left, int const mid, int const right);
		void	recSort(std::vector<std::pair<int,int> > &vec, int const begin, int const end);
		void	recSortb(std::vector<std::pair<int, int> > &t);
		int		returnIndex(int number);
		void	binarySearchInsert(std::vector<std::pair<int, int> > &t);
		void	sortVector();
};

class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};
# endif

// void	Pmerge::recSort(std::vector<std::pair<int, int> > &t)
// {
// 	static int	i;
// 	static int	j;

// 	// t[0].first
// 	std::cout << "t[i] = " << t[i].first << std::endl;
// 	std::cout << "t[i + 1] = " << t[i + 1].first << std::endl;
// 	if (t[j].first < t[j + 1].first)
// 	{
// 		if (j + 1 >= (int)t.size())
// 			return ;
// 		std::swap(t[j].first, t[j + 1].first);
// 		j++;
// 		std::cout << "j = " << j << std::endl;
// 		recSort(this->vecpairs);
// 	}
// 	j = i;
// 	// this->tmp.push_back(this->vecA[i]);
// 	// this->vecB.push_back(this->vecA[i + 1]);
// 	i++;
// 	if (i + 1 >= (int)t.size())
// 		return ;
// 	std::cout << "here" << std::endl;
// 	// // if (this->vecA[i])
// 	recSort(this->vecpairs);
// }