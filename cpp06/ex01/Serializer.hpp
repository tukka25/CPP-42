#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <exception>
#include <stdint.h>

struct Data
{
	int	x;
	std::string kalam;
};

class Serializer
{
	private:
		Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		~Serializer();
};


#endif