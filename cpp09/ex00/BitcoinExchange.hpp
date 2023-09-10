#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <algorithm>
# include <map>

class Bitcoin
{
    private:

    public:
        Bitcoin();
        void    execution(char *str);
        bool    checkFile(char *str);
        ~Bitcoin();
};

class   FileError : public std::exception
{
    public:
        const char *what() const throw();
};
#endif