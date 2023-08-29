#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>
#include "Templates.tpp"

class Templates
{
	public:
		Templates(const Templates& t);
		Templates&	operator=(const Templates &t);
		Templates();
		~Templates();
};

template <class T> T min(T a, T b);

template <class T> T max(T a, T b);

template <class T> void swap(T &a, T &b);

#endif 