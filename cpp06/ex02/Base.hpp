#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <sstream>

class Base
{
	public:
        static Base*   generate(void);
        static void identify(Base* p);
        static void identify(Base& p);
		virtual ~Base();
};

class baseExceptionA : std::exception
{
	public:
		const char *what() const throw();
};

class baseExceptionB : std::exception
{
	public:
		const char *what() const throw();
};

class baseExceptionC : std::exception
{
	public:
		const char *what() const throw();
};
#endif