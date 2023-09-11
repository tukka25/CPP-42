# include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{
    std::cout << "Default Constructor Called" << std::endl;
}

bool    Bitcoin::checkFile(char *str)
{
    this->f.open(str);
    if (this->f.fail())
        return (false);
    return (true);
}

int    Bitcoin::parseDate(std::string  str)
{
    int                 i = 0;
    std::string         month;
    std::string         s;
    std::stringstream   ss;
    std::string::difference_type n = std::count(str.begin(), str.end(), '-');

    // std::cout << n << std::endl;
    if (str.empty())
        return (nodate);
    if (n != 2)
        return (wrongvalue);
    // std::cout << str << std::endl;
    while (getline(ss, s, '-') || !str.empty())
    {
        std::cout << "s in = " << s << std::endl;
        if (s.empty() && str.empty())
            return (wrongvalue);
        if (i == 1)
        {
            // std::cout << "month atoi = " << std::atoi(s.c_str()) << std::endl;
            if (std::atoi(s.c_str()) > 12 || std::atoi(s.c_str()) <= 0)
                return (wrongmonth);
            month = s;
        }
        if (i == 2)
        {
            if (std::atoi(s.c_str()) > 31 || std::atoi(s.c_str()) <= 0
            || !this->validateDayWithMonth(s, month))
                return (wrongday);
        }
        i++;
        str = str.substr(str.find('-') + 1, str.length());
        std::cout << "sub = " << str << std::endl;
    }
    return (0);
}

bool    Bitcoin::validateDayWithMonth(std::string s, std::string month)
{
    (void)s;
    (void)month;
    return (true);
}

void    Bitcoin::execution(char *str)
{
    try
    {
        if (!this->checkFile(str))
            throw (FileError());
        this->parseFile();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    Bitcoin::parseFile(void)
{
    int                 i = 0;
    std::string         s;
    std::stringstream   ss;
    std::string         tmp2;
    std::string         tmp;

    while (getline(f, s))
    {
        ss << s;
        i = 0;
        while (getline(ss, tmp2, ' '))
        {
            if (tmp2 != "|" && i == 0)
                tmp = tmp2;
            i++;
        }
        ss.clear();
        this->m.insert(std::pair<std::string, std::string>(tmp, tmp2));
    }
    std::multimap<std::string, std::string>::iterator   t = this->m.begin();
    for(; t != this->m.end(); t++)
    {
        if (parseDate(t->first) == wrongvalue)
        {
            throw (InvalidFormat());
        }
        if (parseDate(t->first) == wrongday)
        {
            throw (InvalidDay());
        }
        if (parseDate(t->first) == wrongmonth)
        {
            throw (InvalidMonth());
        }
        std::cout << t->first << '\t' << t->second << std::endl;
    }
}

const char *FileError::what() const throw()
{
    return ("Wrong File");
}

const char *InvalidDay::what() const throw()
{
    return ("Error: Invalid Day");
}

const char *InvalidMonth::what() const throw()
{
    return ("Error: Invalid Month");
}

const char *InvalidFormat::what() const throw()
{
    return ("Error: Invalid Format");
}

Bitcoin::~Bitcoin()
{
    std::cout << "Default Destructor Called" << std::endl;
}