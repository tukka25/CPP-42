# include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{
    std::cout << "Default Constructor Called" << std::endl;
}

Bitcoin::Bitcoin(const Bitcoin &b)
{
    *this = b;
}

Bitcoin&    Bitcoin::operator=(const Bitcoin &b)
{
    if (this != &b)
    {
        this->m = b.m;
        this->database = b.database;
    }
    return (*this);
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
    while (getline(ss, s, '-'))
    {
        if (s.empty() && str.empty())
            return (wrongvalue);
        if (i == 0)
            year = s;
        if (i == 1)
        {
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
    }
    ss.clear();
    return (0);
}

bool    Bitcoin::validateDayWithMonth(std::string s, std::string month, std::string year)
{
    if (std::atoi(month.c_str()) == 2 && std::atoi(s.c_str()) > 29)
        return (false);
    if (std::atoi(month.c_str()) == 2 && !this->checkLeapYear(year, month) && std::atoi(s.c_str()) > 28)
        return (false);
    return (true);
}

bool    Bitcoin::checkLeapYear(std::string year, std::string month)
{
    if (std::atoi(month.c_str()) == 2 && (std::atoi(year.c_str()) % 4 == 0))
    {
        if (std::atoi(year.c_str()) % 400 == 0)
            return (true);
        if ((std::atoi(year.c_str()) % 4 == 0) && std::atoi(year.c_str()) % 100 != 0 && std::atoi(year.c_str()) % 400 != 0)
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
    getline(file, str);
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
    std::string         bef;

    while (getline(f, s))
    {
        ss << s;
        i = 0;
        while (getline(ss, tmp2, ' '))
        {
            if (tmp2 != "|" && i == 0)
                tmp = tmp2;
            if (tmp2 == "|")
                bef = "|";
            i++;
        }
        ss.clear();
        // std::cout << "bef = " << bef << std::endl;
        if (tmp2 == "|" || bef != "|")
            tmp2 = "";
        if (i > 3)
            std::cout << "Error: Invalid Format" << std::endl;
        else if (tmp != "Data" && tmp2 != "value")
            this->printing(tmp, tmp2);
        bef = "";
    }
}

bool    Bitcoin::checkValue(std::string value)
{
    if (value.empty())
        return (false);
    std::string::difference_type n = std::count(value.begin(), value.end(), '.');
    if (value.find_first_not_of("0987654321.") != std::string::npos || n > 1
    || std::strtof(value.c_str(), NULL) > 1000 || value == ".")
        return (false);
    return (true);
}

void    Bitcoin::printing(std::string key, std::string value)
{
    int del = parseDate(key);
        if (!this->checkValue(value))
            std::cout << "Error: Invalid Value" << std::endl;
        else if (del == wrongvalue || key.empty() || value.empty())
        {
            std::cout << "Error: Invalid Format" << std::endl;
        }
        else if (del == wrongday)
        {
            std::cout << "Error: Invalid Day" << std::endl;
        }
        else if (del == wrongmonth)
        {
            std::cout << "Error: Invalid Month" << std::endl;
        }
        else if (del == nodate)
        {
            std::cout << "Error: no data" << std::endl;
        }
        else
        {
            std::multimap<std::string, std::string>::iterator   db = this->database.find(key);
            if (db != database.end())
            {
                double b = std::strtof(db->second.c_str(), NULL) * std::strtof(value.c_str(), NULL);
                std::cout << key << "  ==>  " << std::fixed << std::setprecision(2) << b << std::endl;
            }
            else
            {
                std::multimap<std::string, std::string>::iterator   db2 = this->database.lower_bound(key);
                if (db2 == this->database.begin())
                    std::cout << "No Data Available" << std::endl;
                else
                {
                    --db2;
                    double b = std::strtof(db2->second.c_str(), NULL) * std::strtof(value.c_str(), NULL);
                    std::cout << key << "  ==>  " << std::fixed << std::setprecision(2) << b << std::endl;
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