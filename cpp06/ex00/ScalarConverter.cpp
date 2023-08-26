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
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
                throw (intException());
        }
        if (str.length() == 1 && !str.empty() && !isdigit(str[0]))
        {
            i = static_cast<int>(str[0]);
            std::cout << "int: " << i << std::endl;
            return ;
        }
        else if ((str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
        || (str.length() > 1 && !str.find_first_not_of("0123456789")))
        {
            throw (intException());
        }
        else if (str.empty())
            throw (intException());
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
        int    i = 0;
        char    c;
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
            {
                std::cout << "float: " << str << std::endl;
                return ;
            }
        }
        if (str.empty())
            throw (charExceptionNonDisplay());
        if (str.length() == 1 && isascii(str[0]) && !isdigit(str[0]))
        {
            c = (char)str[0];
            std::cout << "char: " << "\'" << c << "\'" << std::endl;
            return ;
        }
       else if ((str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
        || (str.length() > 1 && !str.find_first_not_of("0123456789")))
            throw (charException());
        
        // if (str.length() == 1 && !str.empty())
        // {
        //     i = (int)str[0];
        //     char c = static_cast<char>(i);
        //     std::cout << "char: " << "\'" << c << "\'" << std::endl;
        //     return ;
        // }
        std::stringstream ss;

        ss << str;
        ss >> i;
        if (ss.fail())
            throw (charException());
        c = static_cast<char>(i);
        if (!std::isprint(c) && i > 0 && i < 128)
            throw(charExceptionNonDisplay());
        if (!std::isprint(c) || i > 128 || i < 0)
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
        int     i = 0;
        double  d;
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
            {
                std::cout << "double: " << str << std::endl;
                return ;
            }
        }
        if (str.length() == 1 && !str.empty() && isascii(str[0]) && !isdigit(str[0]))
        {
            i = static_cast<int>(str[0]);
            // std::cout << "i = " << i << std::endl;
            d = static_cast<double>(i);
            std::cout << "double: " << d << ".0" << std::endl;
            return ;
        }
        else if ((str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
        || (str.length() > 1 && !str.find_first_not_of("0123456789")))
            throw (doubleException());
        else if (str.empty())
            throw (doubleException());
        char *j;
        d = static_cast<double>(strtod(str.c_str(), &j));
        if (d > 2147483647)
            d = static_cast<double>(strtod("2147483647", &j));
        if (d < -2147483648)
            d = static_cast<double>(strtod("-2147483648", &j));
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
        int     i = 0;
        float    f = 0;
        std::string throwme[8] = {"-nan", "nan", "-nanf", "nanf", "-inff", "+inff", "-inf", "+inf"};
        for (int i = 0; i < 8; i++)
        {
            if (str == throwme[i])
            {
                std::cout << "float: " << str << "f" << std::endl;
                return ;
            }
        }
        if (str.length() == 1 && !str.empty() && isascii(str[0]) && !isdigit(str[0]))
        {
            i = static_cast<int>(str[0]);
            f = static_cast<float>(i);
            std::cout << "float: " << f << ".0f" << std::endl;
            return ;
        }
        else if ((str.find_first_not_of("ABCDEGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopgrsyuvwxyz") && str.length() > 1)
        || (str.length() > 1 && !str.find_first_not_of("0123456789")))
            throw (floatException());
        if (str.empty())
            throw (floatException());
        // std::stringstream ss;
        // int    i;

        // ss << str;
        // ss >> i;
        f = static_cast<float>(atof(str.c_str()));
        if (f > 2147483647)
             f = static_cast<float>(atof("2147483647"));
         if (f < -2147483648)
             f = static_cast<float>(atof("-2147483648"));
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

const char* charExceptionNonDisplay::what() const throw()
{
    return ("char: Non displayable");
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Default Destructor" << std::endl;
}
