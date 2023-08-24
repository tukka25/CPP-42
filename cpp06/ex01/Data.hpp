#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <exception>

class Data
{
	private:
		Data();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		~Data();
};

#endif