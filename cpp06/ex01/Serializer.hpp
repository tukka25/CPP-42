#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <exception>
#include <stdint.h>

class Serializer
{
	private:
		Serializer();
	public:
		static uintptr_t serialize(Serializer* ptr);
		static Serializer* deserialize(uintptr_t raw);
		~Serializer();
};

struct Data
{
	uintptr_t	t;
};

#endif