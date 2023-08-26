#include "Templates.hpp"

Templates::Templates()
{
	std::cout << "Template Default Constructor" << std::endl;
}

T min(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Templates::~Templates()
{
	std::cout << "Template Default Desstructor" << std::endl;
}