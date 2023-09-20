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

class Pmerge
{
	private:
		std::vector<int>	vecA;
		std::vector<int>	vecB;
	public:
		Pmerge(char *av[]);
		bool	checkValues(char *av[]);
		void	printBefSort();
		void	sortVector();
};

class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};
# endif