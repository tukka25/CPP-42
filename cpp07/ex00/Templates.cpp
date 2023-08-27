#include "Templates.hpp"

Templates::Templates()
{
	std::cout << "Template Default Constructor" << std::endl;
}

Templates::Templates(const Templates &t)
{
	(void)t;
	std::cout << "Template Copy Constructor" << std::endl;
}

Templates& Templates::operator=(const Templates& t)
{
	(void)t;
	return (*this);
}

Templates::~Templates()
{
	std::cout << "Template Default Desstructor" << std::endl;
}