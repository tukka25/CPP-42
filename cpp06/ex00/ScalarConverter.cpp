# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Default Constructor" << std::endl;
}

void	ScalarConverter::toInt(std::string str)
{
    try
    {
        int    i = 0;
        if (str.length() == 1 && !str.empty() && str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz"))
        {
            i = (int)str[0];
            std::cout << "int: " << i << std::endl;
            return ;
        }
        else if (str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
            throw (intException());
        else if (str.empty())
            throw (intException());
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
                throw (intException());
        }
        std::stringstream ss;

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
        int    i;
        if (str.length() == 1 && !str.empty() && str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz"))
        {
            i = (int)str[0];
            char c = static_cast<char>(i);
            std::cout << "char: " << "\'" << c << "\'" << std::endl;
            return ;
        }
        else if (str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
            throw (charException());
        else if (str.empty())
            throw (charException());
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
                throw (charException());
        }
        std::stringstream ss;
        char    c;

        ss << str;
        ss >> i;
        c = static_cast<char>(i);
        if (!std::isprint(c) || i > 128)
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
        double  d;
        if (str.length() == 1 && !str.empty() && str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz"))
        {
            d = (int)str[0];
            d = static_cast<double>(d);
            std::cout << "double: " << std::setprecision(1) << d << std::endl;
            return ;
        }
        else if (str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
            throw (doubleException());
        else if (str.empty())
            throw (doubleException());
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
            {
                std::cout << "double: " << str << std::endl;
                return ;
            }
        }
        char *j;
        d = static_cast<double>(strtod(str.c_str(), &j));
        if (d > 2147483647)
            d = static_cast<double>(strtod("2147483647", &j));
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
        float    f;
        if (str.length() == 1 && !str.empty() && str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz"))
        {
            f = (int)str[0];
        }
        if (str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
            throw (floatException());
        if (str.empty())
            throw (floatException());
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
            {
                std::cout << "float: " << str << "f" << std::endl;
                return ;
            }
        }
        // std::stringstream ss;
        // int    i;

        // ss << str;
        // ss >> i;
        f = static_cast<float>(atof(str.c_str()));
        if (f > 2147483647)
             f = static_cast<float>(atof("2147483647"));
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
