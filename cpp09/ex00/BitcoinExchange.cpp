# include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{
    std::cout << "Default Constructor Called" << std::endl;
}

bool    Bitcoin::checkFile(char *str)
{
    std::ifstream    f;
    std::string     s;
    char            *tmp;

    f.open(str);
    if (f.fail())
        return (false);
    while (getline(f, s))
    {
        // std::cout << s << std::endl;
        tmp = std::strtok((char *)s.c_str(), " ");      
        std::cout << tmp << std::endl;
    }
    return (true);
}

void    Bitcoin::execution(char *str)
{
    if (!this->checkFile(str))
        throw (FileError());
    // while ()
}

const char *FileError::what() const throw()
{
    return ("Wrong File");
}

Bitcoin::~Bitcoin()
{
    std::cout << "Default Destructor Called" << std::endl;
}