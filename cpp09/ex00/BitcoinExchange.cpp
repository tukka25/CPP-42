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
    std::string         year;
    std::string         s;
    std::stringstream   ss;
    std::string::difference_type n = std::count(str.begin(), str.end(), '-');

    ss << str;
    if (str.empty())
        return (nodate);
    if (n != 2)
        return (wrongvalue);
    // std::cout << "bef" << std::endl;
    while (getline(ss, s, '-'))
    {
        // std::cout << "s in = " << s << std::endl;
        if (s.empty() && str.empty())
            return (wrongvalue);
        if (i == 0)
            year = s;
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
            || !this->validateDayWithMonth(s, month, year))
                return (wrongday);
        }
        i++;
        // str = str.substr(str.find('-') + 1, str.length());
        // std::cout << "sub = " << str << std::endl;
    }
    ss.clear();
    return (0);
}

bool    Bitcoin::validateDayWithMonth(std::string s, std::string month, std::string year)
{
    // (void)s;
    // (void)month;
    // std::cout << std::atoi(s.c_str()) << std::endl;
    if (std::atoi(month.c_str()) == 2 && std::atoi(s.c_str()) > 29)
        return (false);
    if (std::atoi(month.c_str()) == 2 && !this->checkLeapYear(year, month) && std::atoi(s.c_str()) > 28)
        return (false);
    return (true);
}

bool    Bitcoin::checkLeapYear(std::string year, std::string month)
{
    if (std::atoi(month.c_str()) == 2 && (std::atoi(year.c_str()) % 4 == 0
    || (std::atoi(year.c_str()) % 100 == 0 && std::atoi(year.c_str()) % 400 == 0)))
    {
        // std::cout << "here" << std::endl;
        return (true);
    }
    return (false);
}

void    Bitcoin::execution(char *str)
{
    try
    {
        if (!this->checkFile(str))
            throw (FileError());
        this->storeDatabase();
        this->parseFile();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    Bitcoin::storeDatabase()
{
    std::ifstream   file;
    std::stringstream   ss;
    std::string         str;
    std::string         splitedstr;
    std::string         tmp;
    int                 i = 0;

    file.open("data.csv");
    if (file.fail())
        throw (NoDatabase());
    while (getline(file, str))
    {
        ss << str;
        i = 0;
        while (getline(ss, splitedstr, ','))
        {
            if (i == 0)
                tmp = splitedstr;
            i++;
        }
        this->database.insert(std::pair<std::string, std::string>(tmp, splitedstr));
        ss.clear();
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
        // if (i < 3)
        //     std::cout << InvalidFormat().what() << std::endl;
        ss.clear();
        if (tmp2 == "|")
            tmp2 = "";
        this->m.insert(std::pair<std::string, std::string>(tmp, tmp2));
    }
    std::multimap<std::string, std::string>::iterator   t = this->m.begin();
    for(; t != this->m.end(); t++)
    {
        int del = parseDate(t->first);
        if (del == wrongvalue || t->first.empty() || t->second.empty())
        {
            std::cout << "Error: Invalid Format" << std::endl;;
        }
        else if (del == wrongday)
        {
            std::cout << "Error: Invalid Day" << std::endl;;
        }
        else if (del == wrongmonth)
        {
            std::cout << "Error: Invalid Month" << std::endl;;
        }
        else
        {
            std::multimap<std::string, std::string>::iterator   db = this->database.begin();
            for (; db != database.end();db++)
            {
                if (t->first == db->first)
                {
                    double b = std::strtof(db->second.c_str(), NULL) * std::strtof(t->second.c_str(), NULL);
                    std::cout << t->first << "  ==>  " << std::fixed << std::setprecision(2) << b << std::endl;
                }
            }
        }
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

const char *NoDatabase::what() const throw()
{
    return ("Error: No Database");
}

const char *InvalidFormat::what() const throw()
{
    return ("Error: Invalid Format");
}

Bitcoin::~Bitcoin()
{
    std::cout << "Default Destructor Called" << std::endl;
}