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
		std::vector<int>	vec;
	public:
		Pmerge(char *av[]);
		bool	checkValues(char *av[]);
		void	printBefSort();
};

class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};
# endif