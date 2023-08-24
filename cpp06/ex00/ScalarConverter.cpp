# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Default Constructor" << std::endl;
}

void	ScalarConverter::toInt(std::string str)
{
    try
    {
        if (str.empty())
            throw (intException());
        std::stringstream ss;
        int    i;

        ss << str;
        ss >> i;
        std::cout << "int: " << i << std::endl;
    }
    catch (std::exception &c)
    {
        std::cout << c.what() << std::endl;
    }
}

void	ScalarConverter::toChar(std::string str)
{
    try
    {
        std::stringstream ss;
        int    i;
        char    c;

        ss << str;
        ss >> i;
        c = static_cast<char>(i);
        if (!std::isprint(c))
            throw (charException());
        std::cout << "char: " << "\'" << c << "\'" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void	ScalarConverter::toDouble(std::string str)
{
    try
    {
        if (str.empty())
            throw (doubleException());
        std::stringstream ss;
        int    i;
        double  d;

        ss << str;
        ss >> i;
        d = static_cast<double>(i);
        std::cout << "double: " << std::setprecision(1) << d << std::endl;
    }
    catch (std::exception &c)
    {
        std::cout << c.what() << std::endl;
    }
}

void	ScalarConverter::toFloat(std::string str)
{
    try
    {
        if (str.empty())
            throw (floatException());
        std::stringstream ss;
        int    i;
        float    f;

        ss << str;
        ss >> i;
        f = static_cast<float>(i);
        std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
    }
    catch (std::exception &c)
    {
        std::cout << c.what() << std::endl;
    }
}

void    ScalarConverter::convert(std::string str)
{
    toChar(str);
    toInt(str);
    toFloat(str);
    toDouble(str);
}

const char* intException::what() const throw()
{
    return ("int: impossible");
}

const char* floatException::what() const throw()
{
    return ("float: impossible");
}

const char* doubleException::what() const throw()
{
    return ("double: impossible");
}

const char* charException::what() const throw()
{
    return ("char: impossible");
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Default Destructor" << std::endl;
}
