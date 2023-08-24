#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <exception>
#include <typeinfo>

class Base
{
	// private:
	public:
		Base();
        static Base*   generate(void);
        static void identify(Base* p);
		virtual ~Base();
};
#endif