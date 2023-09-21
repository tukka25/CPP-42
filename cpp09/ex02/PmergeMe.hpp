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
	public:
		Pmerge(char *av[]);
		bool	checkValues(char *av[]);
		void	printBefSort();
		void	recSort(std::vector<std::pair<int, int> > &t);
		void	recSortb(std::vector<std::pair<int, int> > &t);
		void	binarySearchInsert(std::vector<std::pair<int, int> > &t);
		void	sortVector();
};

class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};
# endif