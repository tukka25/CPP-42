# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Default Constructor" << std::endl;
}

void	ScalarConverter::toInt(std::string str)
{
    std::stringstream ss;
    int    i;
    // std::atof(str.c_str());
    ss << str;
    ss >> i;
    std::cout << "int = " << i << std::endl;
}

void	ScalarConverter::toChar(std::string str)
{
    std::stringstream ss;
    int    i;
    char    c;

    ss << str;
    ss >> i;
    c = static_cast<char>(i);
    std::cout << "char = " << c << std::endl;
}

void	ScalarConverter::toDouble(std::string str)
{
    std::stringstream ss;
    int    i;
    double  d;

    ss << str;
    ss >> i;
    d = static_cast<double>(i);
    std::cout << "Double = " << std::setprecision(1) << d << std::endl;
}

void	ScalarConverter::toFloat(std::string str)
{
    std::stringstream ss;
    int    i;
    float    f;

    ss << str;
    ss >> i;
    f = static_cast<float>(i);
    std::cout << "Float = " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
}

void    ScalarConverter::convert(std::string str)
{
    toInt(str);
    toFloat(str);
    toDouble(str);
    toChar(str);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Default Destructor" << std::endl;
}
