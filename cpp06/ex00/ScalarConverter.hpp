#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		// ScalarConverter();
		static void	convert(std::string str);
		static void	toInt(std::string str);
		static void	toChar(std::string str);
		static void	toDouble(std::string str);
		static void	toFloat(std::string str);
		~ScalarConverter();
};

#endif