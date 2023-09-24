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

enum flag
{
    minus = '-',
    plus = '+',
    mult = '*',
    divi = '/'
};

class   Rpn
{
    private:
        std::stack<int> st;
    public:
        Rpn();
        Rpn(const Rpn &r);
        Rpn&    operator=(const Rpn &r);
        ~Rpn();
        int     doOperation(int num1, int num2, int flag);
        void    execution(char *argv);
};

class   WrongInput: public std::exception
{
    public:
        const char *what() const throw();    
};

class   WrongFormat: public std::exception
{
    public:
        const char *what() const throw();    
};

#endif