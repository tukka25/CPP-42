#include "IterT.hpp"

IterT::IterT()
{
	std::cout << "Template Default Constructor" << std::endl;
}

IterT::IterT(const IterT &t)
{
	(void)t;
	std::cout << "Template Copy Constructor" << std::endl;
}

IterT& IterT::operator=(const IterT& t)
{
	(void)t;
	return (*this);
}

IterT::~IterT()
{
	std::cout << "Template Default Desstructor" << std::endl;
}