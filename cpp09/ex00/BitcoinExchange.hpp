#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <cstring>
# include <cstdlib>
# include <fstream>
#include <sstream>
# include <algorithm>
#include <iomanip>
# include <map>

enum    errorDate
{
    nodate = 1,
    wrongmonth,
    wrongday,
    wrongvalue
};

class Bitcoin
{
    private:
        std::multimap<std::string, std::string>  m;
        std::multimap<std::string, std::string>  database;
        std::ifstream                           f;
    public:
        Bitcoin();
        void    execution(char *);
        void    parseFile(void);
        int     parseDate(std::string   str);
        bool    checkLeapYear(std::string year, std::string month);
        void    storeDatabase();
        bool    validateDayWithMonth(std::string s, std::string month, std::string year);
        bool    checkFile(char *str);
        void    printing(std::string key, std::string value);
        ~Bitcoin();
};

class   FileError : public std::exception
{
    public:
        const char *what() const throw();
};
class   InvalidDay : public std::exception
{
    public:
        const char *what() const throw();
};
class   InvalidMonth : public std::exception
{
    public:
        const char *what() const throw();
};
class   NoDatabase : public std::exception
{
    public:
        const char *what() const throw();
};
class   InvalidFormat : public std::exception
{
    public:
        const char *what() const throw();
};
#endif