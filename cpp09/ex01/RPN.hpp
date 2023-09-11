#ifndef RPN_HPP
# define RPN_HPP

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

class   Rpn
{
    private:
        std::stack<int> st;
    public:
        Rpn();
        ~Rpn();
        int     doOperation(int num1, int num2, std::string flag);
        void    execution(char *argv);
};

class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};
#endif